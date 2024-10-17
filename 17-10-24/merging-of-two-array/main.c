/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a1[5],a2[5],merge[10];
    int i;
    printf("Enter the elements of first array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the elements of second array :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a2[i]);
    }
    for(i=0;i<5;i++){
    merge[i] = a1[i];
    merge[i+5] = a2[i];
    }
    
    printf("Merged array ");
    for(i=0;i<10;i++)
    {
        printf("%d ",merge[i]);
    }


    return 0;
}
