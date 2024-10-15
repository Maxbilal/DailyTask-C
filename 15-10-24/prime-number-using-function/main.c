/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int isPrime(int num)
{
    if(num<=0)
    return 0;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            return 0;
            
        }
        return 1;
    
}
int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    
    if(isPrime(num))
    {
        printf("%d is a prime number \n",num);
    }
    else
    {
        printf("%d is not prime number \n",num);
    }
    return 0;
}




