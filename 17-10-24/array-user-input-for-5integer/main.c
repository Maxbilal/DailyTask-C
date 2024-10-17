/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    int a[5];
    printf("Enter the integers : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display the Integers ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
