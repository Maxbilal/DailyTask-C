/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[8],i,j;
    int count =0;
    printf("Enter the 8 elements of the array :");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i < 8;i++)
    {
        for(j=i+1;j < 8;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("The dupicate elements are : %d\n",count);

    return 0;
}
