#include<stdio.h>

int main()
{
    int x , y;

    printf("Enter x and y coordinates : ");
    scanf("%d%d",&x,&y);

    if(x==0 && y==0)
    printf("\n x and y occur at origin");
    else if(x>0 && y>0)
    printf("\n x and y occur at I st quadrant");
     else if(x<0 && y>0)
     printf("\n x and y occur at II nd quadrant");
     else if(x<0 && y<0)
     printf("\n x and y occur at III rd quadrant");
     else if(x>0 && y<0)
     printf("\n x and y occur at IV th quadrant");

     return 0;

}