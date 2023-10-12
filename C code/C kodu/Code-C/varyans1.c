#include <stdio.h>

int dot_product(int arr1[],int arr2[], int size);
float variance(int arr[], int size);
float mean(int arr[], int size);

int main()
{
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int size=5;

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

int dot_product(int arr1[],int arr2[], int size)
{
    int dot;
    for(int i=0; i<size; i++)
    {
        dot += (arr1[i]*arr2[i]);
    }
    return dot;
}

float variance(int arr[], int size)
{
    int diff[size]={0};
    float m=mean(arr, size);
    for(int i=0; i<size; i++)
    {
        diff[i]=arr[i]-m;
    }
    int dot=dot_product(diff,diff,size);
    float var=dot / (float)size;
    return var;
}

float mean(int arr[], int size)
{
    float sum=0;
    for(int i=0; i<size; i++)
    {
        sum +=arr[i];
    }
    return sum/size;
}

