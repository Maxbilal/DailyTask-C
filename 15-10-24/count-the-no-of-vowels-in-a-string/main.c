/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int countVowels(char str[])
{
    int count = 0,i=1;
    char vov;
    
    while(str[i] != '\0')
    {
        vov = str[i];
        
        if(vov == 'a' || vov == 'e' || vov == 'i' || vov == 'o' || vov == 'u' ||
            vov == 'A' || vov == 'E' || vov == 'I' || vov == 'O' || vov == 'U') 
            {
                count++;
            }
            i++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter a string:");
    gets(str);
    
    printf("Number of vowels: %d\n", countVowels(str));
    return 0;
}