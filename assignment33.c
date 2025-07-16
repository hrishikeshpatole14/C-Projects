#include<stdio.h>

int main(){

    int x , y , rem ,n, temp, quotient , options;


    printf("Enter variable x & y :\n");
    scanf("%d%d",&x,&y);

    printf("Enter the option you want to perform :\n1.Equality\n2.Less Than\n3.Quotient and Remainder\n4.Range\n5.Swap\n");

    scanf("%d",&options);

    switch(options){
        case 1 : if(x==y)
                   printf("\n%d is equal to %d",x,y);
                else
                printf("\n%d is not equal to %d",x,y);
        break;

        case 2 : if(x<y)
                  printf("\n%d is  less than %d",x,y);
                else
                printf("\n%d is not less than %d",x,y);
        break;
        
        case 3 :  if (y != 0) {
                quotient = x / y;
                rem = x % y;
                printf("\nQuotient of %d and %d is %d\n", x, y, quotient);
                printf("Remainder of %d and %d is %d\n", x, y, rem);
            } else {
                printf("\nDivision by zero is not allowed.\n");
            }
        break;

        case 4 : printf("Enter a number to check if lies btween x  and y\n");
                scanf("%d",&n); 
              if(n>x && n<y)
              printf("\n%d lies between %d and %d",n,x,y);
              else
               printf("\n%d not lies between %d and %d",n,x,y);

        break;
        
        case 5: temp=x;
                x=y;
                y=temp;
                printf("\nInterchnage values x and y is  %d and %d:", x,y);
         break;
         
         default :
          printf("\n Invalid choice");

    }
    return 0;


                


}