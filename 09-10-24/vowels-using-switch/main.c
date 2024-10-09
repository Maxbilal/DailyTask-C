/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter :");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a' : printf("%c is a vowel\n",letter);
        break;
        case 'e' : printf("%c is a vowel\n",letter);
        break;
        case 'i' : printf("%c is a vowel\n",letter);
        break;
        case 'o' : printf("%c is a vowel\n",letter);
        break;
        case 'u' : printf("%c is a vowel\n",letter);
        break;
        default : printf("It is a consonant\n");
        break;
    }

    return 0;
}
