//
//  linkedlist.c
//  linkedlist
//

#include "linkedlist.h"

void insert_element(struct node** head, int data) {

}

void remove_element(struct node** head, int data) {

}

int search_element(struct node* head, int data) {

}

int get_length(struct node* head) {

}

void reverse(struct node** head) {

}

void print(struct node*head) {
    struct node* tmp = head;
    printf("Linked list: ");
    while (tmp != NULL) {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
