#include<stdio.h>


int main()
{
    int x , y, i;

    printf("Enter the starting number(x):");
    scanf("%d",&x);

    printf("Enter the ending number(y):");
    scanf("%d",&y);

    printf("\nnumbers print from %d to %d is:\n",x,y);

    for(i=x ; i<=y ; i++)
    {
        
        printf("%d\n",i);
    }
    return 0;
}