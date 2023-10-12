#include <stdio.h>
int main()
{
    float a[100], b[100];
    int n;
    float dot_product_calc(int *, float a[], float b[]);
    float mean_calc(int n, float a[], float b[]);
    float dot_product;
    dot_product=dot_product_calc(&n, a[], b[]);
    float mean;
    mean=mean_calc(n, a[], b[]);
    printf("Dot product: %f, mean: %f", dot_product, mean);
    return 0;
}

float dot_product_calc(int *n, float a[], float b[])
{
    float dot_product = 0;
    int i;
    printf("Vektörlerin boyutunu girin: ");
    scanf("%d", &n);

    printf("\n1. vektörü girin: ");
    for(i=0; i<*n; i++)
        scanf("%f", &a[i]);

    printf("\n2. vektörü girin: ");
    for(i=0; i<*n; i++)
        scanf("%f", &b[i]);

    for(i=0; i<*n; i++)
    {
        dot_product = dot_product + a[i] * b[i];
    }
    
    return dot_product;
}

float mean_calc(int n, float a[], float b[])
    {
        int i;
        float sum;
        float mean = sum = 0;
        for(i=0; i<n; i++)
        {
            sum= sum+a[i]+b[i];
        }
        mean=sum/((n-1)*2);
        return mean;
    }





