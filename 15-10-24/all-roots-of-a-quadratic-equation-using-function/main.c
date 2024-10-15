#include<stdio.h>
#include<math.h>

void findRoots(float a,float b,float c)
{
    float num = b * b - 4 * a * c;
    
    if(num > 0)
    {
        printf("Roots are real and different.\n");
        printf("Roots 1 = %.2f\n",(-b + sqrt(num))/(2*a));
        printf("Roots 2 = %.2f\n",(-b - sqrt(num))/(2*a));
    }
    else if(num == 0)
    {
        printf("Roots are real and equal\n");
        printf("Roots 1 =  Roots 2 = %.2f\n",-b / (2*a));
    }
    else
    {
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", -b / (2 * a), sqrt(-num) / (2 * a));
        printf("Root 2 = %.2f - %.2fi\n", -b / (2 * a), sqrt(-num) / (2 * a));
    }
}
int main()
{
    float a,b,c;
    printf("Enter the coefficients of a, b and c :");
    scanf("%f %f %f",&a,&b,&c);
    
    findRoots(a,b,c);
    return 0;
}
