//
//  main.c
//  stack
//
//  Created by timoteosonurozcelik on 08/04/2023.
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int is_palindrome(int number) {
    struct node* top = NULL;
    
    
}

int main(int argc, const char * argv[]) {
    int i = 0;
    int N = 3;
    int arr[] = {0, 123, 232};
    for(i=0; i<N; i++) {
        if(is_palindrome(arr[i])) {
            printf("%d is a palindrome number \n", arr[i]);
        } else {
            printf("%d is not a palindrome number \n", arr[i]);
        }
    }
    return 0;
}


