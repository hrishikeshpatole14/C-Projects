#include<stdio.h>

int main()
{
    int i , x , y , sum=0;

    printf("enter the starting number(x):");
    scanf("%d",&x);

    printf("enter the ending number(y):");
    scanf("%d",&y);

    for(i=x ; i<=y ; i++)
    {
        sum = sum+i;
    }
    printf("Sum is :%d",sum);

    return 0;

}