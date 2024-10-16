/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14159

float calculateArea(float radius)
{
    return PI * radius * radius;
}
int main()
{
    float radius;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    if(radius < 0)
    {
        printf("The radius cannot be negative ");
    }
    else
    {
        printf("The radius of the circle is %.2f\n",calculateArea(radius));
    }
    return 0;
}