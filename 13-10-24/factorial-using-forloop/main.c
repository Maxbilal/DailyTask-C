/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int num,i,factorial=1;
	printf("Enter a number :");
	scanf("%d",&num);
	if(num>0)
	{
		for(i=1; i<=num; i++)
			factorial *= i;
	}
	else
	{
		printf("Enter a valid number");
	}
	printf("The factorial of %d is %d\n",num,factorial);

	return 0;
}
