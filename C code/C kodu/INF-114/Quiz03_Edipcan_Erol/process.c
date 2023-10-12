//
//  process.c
//
//

#include "process.h"
#include <assert.h>

//kuyruğun sonuna eleman ekleme
void enqueue(struct process_queue** head, struct process proc) 
{
    struct process_queue* new_node = (struct process_queue*) malloc(sizeof(struct process_queue));
    new_node->process = proc;
    new_node->next = NULL;
    
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    
    struct process_queue* last_node = *head;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    
    last_node->next = new_node;
}



//kuyruğun başından eleman silme; process çekilip işlendikten sonra işlem süresi kalmadıysa.
void dequeue_and_pop(struct process_queue** head) 
{
    if (*head == NULL) 
    {
        return;
    }
    
    struct process_queue* temp = *head;
    *head = (*head)->next;
    free(temp);
}

//kuyruğun başına eleman ekleme
void push(struct process_queue** top, struct process proc) 
{
    struct process_queue* new_node = (struct process_queue*) malloc(sizeof(struct process_queue));
    new_node->process = proc;
    new_node->next = *top;
    *top = new_node;
}

//kuyruğun başındaki elemanı çekme; free işlemi yok
struct process_queue* peek(struct process_queue* head) 
{
    return head;
}

int is_empty(struct process_queue* head) 
{
    return head == NULL;
}

//kuyruğun başındaki elemanı sona atma; standart process çekilip işlendikten sonra süresi kaldıysa.
void round_queue(struct process_queue** head) 
{
    if (*head == NULL || (*head)->next == NULL) 
    {
        return;
    }
    
    struct process_queue* last_node = *head;
    while (last_node->next != NULL) 
    {
        last_node = last_node->next;
    }
    
    last_node->next = *head;
    *head = (*head)->next;
    last_node->next->next = NULL;
}

void print_queue(struct process_queue* head) 
{
    if(head == NULL) 
    {
        printf("Process Queue is empty \n");
    }
    while(head != NULL) 
    {
        printf("Process PID: %d -> ", head->process.PID);
        head = head->next;
    }
    printf("NULL \n");
}


