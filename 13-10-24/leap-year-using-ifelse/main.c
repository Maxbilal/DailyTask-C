/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year % 4 == 0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("It is a leap year");
            }
            else{
                printf("It is not a leap year");
            }
           
        }
        else{
            printf("It is a leap year");
        }
    }
    else("It is not a leap year");
   

    return 0;
}
