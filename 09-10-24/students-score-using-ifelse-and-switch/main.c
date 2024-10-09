
#include <stdio.h>

int main()
{
    int score;
    char grade;
    printf("Enter the mark of the student :");
    scanf("%d",&score);
    if(score>=60)
    {
        grade = 'A';
    }
    else if(score>=50)
    {
        grade = 'B';
    }
    else if(score>=40)
    {
        grade = 'C';
    }
    else if(score>=30)
    {
        grade = 'D';
    }
    else if(score>=20)
    {
        grade = 'F';
    }
    
    else
    {
        printf("Invalid choice");
    }
    printf("The students grade is %c\n",grade);
    switch(grade)
    {
        case 'A' : printf("EXCELLENT");
        break;
        case 'B' : printf("NICE");
        break;
        case 'C' : printf("NOT BAD");
        break;
        case 'D' : printf("NEEDS IMPROVEMENT");
        break;
        case 'F' : printf("YOU FAILED");
        break;
        
    }

    return 0;
}
