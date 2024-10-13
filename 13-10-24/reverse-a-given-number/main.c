#include <stdio.h>

int main()
{
    int i,n;
    int arr[100];
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        printf("Reverse -%d : ", i);
        scanf("%d",&arr[i]);
    }
    
    printf("Value stored in the array are :");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\nThe Reversed numbers are :");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    printf("\n\n");
    return 0;
}