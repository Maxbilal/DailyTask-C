/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float rectangleArea(float length,float width)
{
    if(length < 0 || width < 0)
    {
        printf("length and width cannot be negative\n ");
        return -1;
    }
    else
    {
       float area =  length * width;
       printf("The area of the rectangle is: %.2f\n", area); 
    }
}
int main()
{
	float length,width;
	printf("Enter the length of a rectangle : ");
	scanf("%f",&length);
    printf("Enter the breadth of a rectangle : ");
    scanf("%f",&width);
    
    rectangleArea(length,width);
    
    return 0;
    
}
