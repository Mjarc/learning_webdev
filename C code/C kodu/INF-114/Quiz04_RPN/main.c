#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "rpn.h"
#include <string.h>

int main() {
    struct stackNode *stack = NULL;
    char expr[100];

    printf("RPN Calculator\n");
    printf("To exit, write 'exit' and press ENTER\n");

    while (1) {
        printf("Enter the equation: ");
        fgets(expr, sizeof(expr), stdin);

        if (strcmp(expr, "exit\n") == 0) {
            printf("Exiting the RPN Calculator.\n");
            break;
        }

        double result = evaluate_RPN(expr, &stack);
        printf("The result of this equation is %.2f\n", result);
        stack_free(&stack);
    }

    return 0;
}
