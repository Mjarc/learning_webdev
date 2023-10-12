#include <stdio.h>

int dot_product(int arr1[], int arr2[], int size);
float mean(int arr[], int size);
float variance(int arr[], int size);

int dot_product(int arr1[], int arr2[], int size) 
{
    int dot = 0;
    for (int i = 0; i < size; i++) 
    {
        dot += arr1[i] * arr2[i];
    }
    return dot;
}

float mean(int arr[], int size) 
{
    float sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}

float variance(int arr[], int size) 
{
    float m = mean(arr, size);
    int diff[size];
    for (int i = 0; i < size; i++) 
    {
        diff[i] = arr[i] - m;
    }
    int dot = dot_product(diff, diff, size);
    float var = dot / (float)size;
    return var;
}

int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    
    int dot = dot_product(arr1, arr2, size);
    float m1 = mean(arr1, size);
    float var1 = variance(arr1, size);
    float m2 = mean(arr2, size);
    float var2 = variance(arr2, size);

    printf("Dot product of arr1 and arr2: %d\n", dot);
    printf("Mean of arr1: %f\n", m1);
    printf("Mean of arr2: %f\n", m2);
    printf("Variance of arr1: %f\n", var1);
    printf("Variance of arr2: %f\n", var2);
    
    return 0;
}
