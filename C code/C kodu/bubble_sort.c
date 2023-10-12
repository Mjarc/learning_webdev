#include <stdio.h>

void bubble_sort(int array[], int size);
void printf_array(int array[], int size);

int main()
{
    int array[] = {4,5,8,1,9,10,2,6,7,11};
    int size = sizeof(array)/sizeof(array[0]);
    printf("The array before sorting: ");
    printf_array(array,size);
    bubble_sort(array,size);
    printf("\nThe array after sorting: ");
    printf_array(array,size);
    return 0;
}

void bubble_sort(int array[], int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printf_array(int array[], int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
