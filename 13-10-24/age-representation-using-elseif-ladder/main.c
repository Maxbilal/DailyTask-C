/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age >=0 && age <=12 )
    {
        printf("Your a Child");
    }
    else if(age >=13 && age <=19)
    {
        printf("Your a Teenager");
    }
    else if(age >=20 && age <=64)
    {
        printf("Your an Adult");
    }
    else if(age >= 65)
    {
        printf("Your a Senior");
    }
    else if(age < 0)
    {
        printf("Please enter a valid age ");
    }
    else
    {
        printf("Invalid ");
    }

    return 0;
}