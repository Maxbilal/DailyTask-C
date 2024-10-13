/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,sum;
    printf("Enter a positive number :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter a positive number ");
    }
    else
    {
        sum = n*(n+1)/2;
        
    }
    printf("The sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}
