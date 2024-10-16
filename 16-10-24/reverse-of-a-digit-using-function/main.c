/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int reverseNumber(int num)
{
    int reversed = 0;
    
    while(num != 0)
    {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
        
    }
    return reversed;
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    
    printf("The reversed number is %d\n",reverseNumber(num));

    return 0;
}
