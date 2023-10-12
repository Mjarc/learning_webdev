#include <stdio.h>

int multiplication(int a, int b);

int main(){
    int num1=5;
    int num2=10;
    int result=multiplication(num1, num2);
    printf("%d\n", result);
}

int multiplication(int a, int b){
    int result=a*b;
    return result;
}