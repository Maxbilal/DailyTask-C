/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int findMaximum(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int num1,num2;
    printf("Enter the first number  :");
    scanf("%d",&num1);
    printf("Enter the second number  :");
    scanf("%d",&num2);
    int max = findMaximum(num1,num2);
    printf("The maximum value is %d",findMaximum(num1,num2));
    
    return 0;
}