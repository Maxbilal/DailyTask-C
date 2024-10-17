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
    int min,max;
    printf("Enter 8 elements of the array :");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    min = max = a[0];
    for(int i=0;i<8;i++)
    {
        if(a[i]>max)
        {
            max += a[i];
        }
        else
        {
            min += a[i];
        }
    }
    printf("Maximum is %d\n",max);
    printf("Minimum is %d\n",min);
    return 0;
}
