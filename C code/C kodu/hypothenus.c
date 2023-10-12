#include "hypothenus-h.h"

int main()
{
    double x;
    double y;
    double z;
    printf("Give me the first corner: ");
    scanf("%lf", &x);
    printf("Give me the second corner: ");
    scanf("%lf", &y);
    z = hypothenus(x,y);
    printf("Your hypothenus is: %.1lf\n", z);
    return 0;
}
