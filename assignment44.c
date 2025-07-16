#include<stdio.h>

int main()
{
    int i , sum , n;
    printf("enter the number till where to want to print sum:");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        sum = sum+i;
    }

    printf("Sum is : %d",sum);

    return 0;
}