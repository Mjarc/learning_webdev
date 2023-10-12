//  main.c
//  queue_cpu_scheduling
//
//  Created by timoteosonurozcelik on 12/04/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "process.h"
#include "process.c"

#define NPROC 5
#define ProcessID 30000

struct process create_process(int PID, int duration, int is_interrupt) {
    struct process proc = {PID, duration, is_interrupt};
    return proc;
}

void round_robin(struct process_queue* head, int pid) {
    int i = 0; // Buradaki pid ve i değerleri PID değerlerinin unique olması için belirtilen parametreler. Pek takılmanıza gerek yok.
    while(!is_empty(head)) {
        // %20 ihtimalle kesme gelir ve (10, 20)ms sürelerinden birinin uzunluğunda kesme process'i kuyruğa eklenir.
        if((rand() % 10) <= 1) {
            printf("Interruption with PID: %d came.\n", pid + i);
            struct process process = create_process(pid + i, (rand() % 2 + 1) * 10, 1);
            // interrupt came, then add interrupt process in the beginning (head) of queue.
            push(&head, process);
            i++;
        }
        else {
            // Process çekilecek.
            struct process_queue* current_process = peek(head);
            if (current_process == NULL) {
                break;
            }
            if (current_process->process.is_interrupt == 1) {
                current_process->process.dur -= 10;
                if (current_process->process.dur <= 0) {
                    dequeue_and_pop(&head);
                } else {
                    round_queue(&head);
                }
            } else {
                current_process->process.dur -= 10;
                if (current_process->process.dur <= 0) {
                    dequeue_and_pop(&head);
                } else {
                    push(&head, current_process->process);
                    dequeue_and_pop(&head);
                }
            }
        }
        print_queue(head);
    }
}

int main(int argc, const char * argv[]) {
    int i;
    struct process_queue* head = NULL;
    // Tanımlanan NPROC değeri kadar ProcessID'den ProcessID + NPROC'a kadar PID'si olan kesme olmayan standart süreçler kuyruğa eklenir.
    for(i=0; i<NPROC; i++) {
        printf("***");
        // create process with duration among (10, 20, 30, 40) ms.
        struct process process = create_process(ProcessID + i, (rand() % 3 + 1) * 10, 0);
        
        push(&head, process); // process kuyruğun sonuna eklenir
        print_queue(head);
    }
    
    round_robin(head, ProcessID + i);
    
    return 0;
}

