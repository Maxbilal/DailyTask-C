/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int N,i,j,k;
	printf("Enter the number of rows :");
	scanf("%d",&N);
	for(i=N; i>=1; i--)
	{
		for(j=1; j<=N; j++)
		{
		    if(j<=N-i)
		    {
		        printf(" ");
		    }
		    else
		    {
		        printf("*");
		    }
		}
		    
		printf("\n");
	}

	return 0;
}
