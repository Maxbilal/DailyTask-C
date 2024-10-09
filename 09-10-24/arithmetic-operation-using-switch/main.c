/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,choice,result;
    printf("Enter a digit : ");
    scanf("%d",&a);
    printf("Enter the second digit : ");
    scanf("%d",&b);
    printf("Choose a operation\n");
    printf("1.ADD (+)\n");
    printf("2.SUBSTRACT (-)\n");
    printf("3.MULTIPLY (*)\n");
    printf("4.DIVIDE (/)\n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("%d + %d is %d\n",a,b,a + b);
        break;
        case 2 : printf("%d - %d is %d\n",a,b,a - b);
        break;
        case 3 : printf("%d * %d is %d\n",a,b,a * b);
        break;
        case 4 : printf("%d / %d is %d\n",a,b,a / b);
        break;
        default : printf("Invalid choice \n");
        break;
        
    }
    
    
    return 0;
}