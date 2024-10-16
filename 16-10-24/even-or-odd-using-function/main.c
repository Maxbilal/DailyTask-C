#include <stdio.h>
#include<stdbool.h>
bool new(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(new(a))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    new(a);

    return 0;
}