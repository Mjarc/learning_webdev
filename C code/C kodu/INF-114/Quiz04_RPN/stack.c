#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

void stack_free(struct stackNode** top) {
    struct stackNode* cursor = *top;
    while (cursor != NULL) {
        struct stackNode* orphan = cursor;
        cursor = cursor->next;
        free(orphan);
    }
    *top = NULL;
}

int is_empty(struct stackNode *top) {
    int result = 0;
    if (top == NULL) {
        result = 1;
    }
    return result;
}

void stack_push(struct stackNode **top, double data) {
    struct stackNode* new_node = (struct stackNode*)malloc(sizeof(struct stackNode));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    new_node->data = data;
    new_node->next = *top;
    *top = new_node;
}

double stack_pop(struct stackNode **top) {
    double retval = 0;
    if (!is_empty(*top)) {
        struct stackNode* temp = *top;
        retval = temp->data;
        *top = temp->next;
        free(temp);
    }
    return retval;
}

void stack_print(struct stackNode *top) {
    if (is_empty(top)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    struct stackNode* cursor = top;
    while (cursor != NULL) {
        printf("%.2lf -> ", cursor->data);
        cursor = cursor->next;
    }
    printf("NULL\n");
}
