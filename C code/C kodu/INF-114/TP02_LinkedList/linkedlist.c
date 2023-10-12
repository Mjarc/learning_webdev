//
//  linkedlist.c
//  linkedlist
//
//

#include "linkedlist.h"


struct node* insert(struct node* head, int data) {
    struct node* cur = head;
    if(head == NULL) {
        head = malloc(sizeof(struct node));
        head->data = data;
        return head;
    }
}


void insert_element(struct node** head, int data) {
    struct node* cur = (*head);
    if(cur == NULL) {
        cur = malloc(sizeof(struct node));
        cur->data = data;
        cur->next = NULL;
        *head = cur;
    } else {
        // at least head is not NULL!
        struct node* nxt = (*head)->next;
        struct node* tmp = malloc(sizeof(struct node));
        tmp->data = data;
        
        // if insert in the beginning;
        if(data < cur->data) {
            tmp->next = cur;
            *head = tmp;
        } else {
            while(nxt != NULL) {
                // insert in the middle
                if(data >= cur->data && data < nxt->data) {
                    cur->next = tmp;
                    tmp->next = nxt;
                    return;
                }
                cur = nxt;
                nxt = nxt->next;
            }
            // insert in the end
            if(data >= cur->data) {
                tmp->next = NULL;
                cur->next = tmp;
            }
        }
    }
}

void remove_element(struct node** head, int data) {
    // no assumption on the order of linked list
    struct node* cur = (*head);
    if(cur == NULL) {
        printf("Linked list is empty");
    } else {
        if(cur->data == data) {
            // remove from the beginning
            *head = cur->next;
            free(cur);
            // printf("Element %d is removed", data);
        } else {
            struct node* nxt = (*head)->next;
            // cur -> nxt
            while(nxt != NULL) {
                if(nxt->data == data) {
                    cur->next = nxt->next;
                    free(nxt);
                    // printf("Element %d is removed", data);
                    return;
                }
                cur = nxt;
                nxt = nxt->next;
            }
            printf("Element %d could not be found", data);
        }
    }
}

int search_element(struct node* head, int data) {
    // no assumption on the order of linked list
    struct node* tmp = head;
    int index = 0;
    while(tmp != NULL) {
        if(tmp->data == data) {
            return index;
        }
        tmp = tmp->next;
        index += 1;
    }
    return -1;
}

int get_length(struct node* head) {
    // no assumption on the order of linked list
    int length = 0;
    struct node* tmp = head;
    
    while(tmp != NULL) {
        length += 1;
        tmp = tmp->next;
    }
    
    return length;
}

void reverse(struct node** head) {
    // no assumption on the order of linked list
    struct node* prv = *head;
    if(prv == NULL || (prv != NULL && prv->next == NULL)) {
        return;
    } else {
        // at least two elements
        struct node* cur = prv->next;
        struct node* nxt = cur->next;
        
        prv->next = NULL;
        cur->next = prv;
        while (nxt != NULL) { // why not cur??
            // cur->next = prv;
            prv = cur;
            cur = nxt;
            nxt = nxt->next;
            
            cur->next = prv;
        }
        cur->next = prv;
        *head = cur;
    }
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


void delete_list(struct node** head) {
    // no assumption on the order of linked list
    struct node* tmp = (*head);
    if(tmp == NULL) {
        printf("Linked list is empty");
    } else {
        while(tmp != NULL) {
            *head = tmp->next;
            free(tmp);
            tmp = *head;
        }

    }
}

