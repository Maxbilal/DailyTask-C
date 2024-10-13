/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,prime=1;
    printf("Enter a number :");
    scanf("%d",&num);
    if(num <= 1)
    {
        prime = 0;
    }
    else
    {
        for(i=2;i*i<=num;i++)
        {
            if(num % i== 0)
            {
                prime = 0;
                break;
            }
        }
    }
    printf("%d is %s prime number.\n", num,prime?"a":"not a");
    

    return 0;
}
