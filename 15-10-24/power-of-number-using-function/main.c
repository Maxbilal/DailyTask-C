
#include <stdio.h>
double power(double base,int exponent)
{
    double result = 1;
    int i;
    for(i=0;i<exponent;i++)
    {
        result *= base;
    }
    return result;
}
int main()
{
    double base;
    int exponent;
    printf("Enter the base :");
    scanf("%lf",&base);
    printf("Enter the exponent :");
    scanf("%d",&exponent);
    
    printf("%.2lf^%d = %.2lf\n",base,exponent,power(base,exponent));
    return 0;
}
