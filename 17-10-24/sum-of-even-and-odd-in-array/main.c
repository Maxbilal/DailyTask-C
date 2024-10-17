/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[8];
    int even_sum=0,odd_sum=0;
    printf("Enter 8 elements :");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<8;i++)
    {
        if(a[i] % 2 == 0)
            even_sum += a[i];
        else
            odd_sum += a[i];
        
    }
    printf("The sum of even number are %d\n",even_sum);
    printf("sum of odd elements are %d\n",odd_sum);
    

    return 0;
}
