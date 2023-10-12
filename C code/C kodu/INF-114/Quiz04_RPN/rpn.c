#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <string.h>
#include "rpn.h"
#include "stack.h"

double compute_operation(double op1, double op2, char operation) {
    double result = 0;

    switch (operation) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            result = op1 / op2;
            break;
        default:
            printf("Invalid operation: %c\n", operation);
            exit(1);
    }

    return result;
}

double evaluate_RPN(char *expr, struct stackNode **top) {
    double result = 0;
    char *token;

    token = strtok(expr, " \t\n");
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            double operand = atof(token);
            stack_push(top, operand);
        } else if (strlen(token) == 1 && strchr("+-*/", token[0]) != NULL) {
            if (is_empty(*top) || is_empty((*top)->next)) {
                printf("Invalid expression: insufficient operands\n");
                exit(1);
            }
            double op2 = stack_pop(top);
            double op1 = stack_pop(top);
            double res = compute_operation(op1, op2, token[0]);
            stack_push(top, res);
        } else if (strcmp(token, "exit") == 0) {
            printf("Exiting the RPN Calculator.\n");
            exit(0);
        } else {
            printf("Invalid token: %s\n", token);
            exit(1);
        }
        token = strtok(NULL, " \t\n");
    }

    if (!is_empty(*top)) {
        result = stack_pop(top);
        if (!is_empty(*top)) {
            printf("Invalid expression: too many operands\n");
            exit(1);
        }
    } else {
        printf("Invalid expression: no result\n");
        exit(1);
    }

    return result;
}


void rpn_test_evaluate_RPN() {
    struct stackNode *stack = NULL;

    printf("Testing equation 13+2-\n");
    assert(evaluate_RPN("13+2-", &stack) == 2.0);

    printf("Testing equation 62+5*84/-\n");
    assert(evaluate_RPN("62+5*84/-", &stack) == 38.0);

    stack_free(&stack);

    printf("The tests are successful.\n");
}
