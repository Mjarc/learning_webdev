#include <stdio.h>
#define PI 3.14
double Circumference(double);
double Area(double);

int main()
{
    printf("Please enter the diameter of your circle: ");
    double x;
    scanf("%lf", &x);
    double y;
    y = Circumference(x);
    double z;
    z = Area(x);
    printf("The circumference of your circle is: %lf\n", y);
    printf("The Area of your circle is: %lf\n", z);
    return 0;
}

double Circumference(double x)
{
    double y = 2*x*PI;
    return y;
}

double Area(double x)
{
    double y = x*x*PI;
    return y;
}