#include <stdio.h>

void calculator(double num1,double num2,char operator)
{
    switch(operator)
    {
        case '+' : printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1+num2);
        break;
        case '-' : printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1-num2);
        break;
        case '*' : printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1*num2);
        break;
        case '/' :
        if(num2 != 0){
            printf("%.2lf / %.2lf = %.2f\n",num1,num2,num1/num2);
            break;
        }
        else
        {
            printf("Error Division by zero not possible\n");
        }
        default : printf("Invalid value");
        break;
    }
}
int main()
{
    double num1,num2;
    char operator;
    printf("Enter the first number : ");
    scanf("%lf",&num1);
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c",&operator);
    printf("Enter the second number : ");
    scanf("%lf",&num2);
    
    calculator(num1,num2,operator);
    
    return 0;
}
