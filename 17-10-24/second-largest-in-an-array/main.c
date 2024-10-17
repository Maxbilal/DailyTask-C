/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[9],i;
    int largest,second_largest;
    printf("Enter the 9  elements in the array :");
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    largest = second_largest = a[0];
    for(i=0;i<9;i++)
    {
        if(a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if(a[i] > second_largest && a[i] != largest)
        {
            second_largest = a[i];
        }
    }
    printf("The second largest is %d\n",second_largest);
    

    return 0;
}
