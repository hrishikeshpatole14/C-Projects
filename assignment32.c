#include<stdio.h>

int main(){

    int n1 , n2 , n3;
    char op;

    printf("Enter two numbers :");
    scanf("%d%d",&n1,&n2);

    printf("Enter your choice:  + , - , / , *\n");
    scanf(" %c", &op);

    switch(op){

        case '+' : n3 = n1 + n2;
        printf("\n addition is %d+%d=%d",n1,n2,n3);
        break;

        case '-' :  n3 = n1 - n2;
        printf("\n subtraction is %d-%d=%d",n1,n2,n3);
        break;

        case '/' :  n3 = n1 / n2;
         printf("\n division is %d/%d=%d",n1,n2,n3);
        break;

         case '*' : n3 = n1 * n2;
          printf("\n multiplication is %d*%d=%d",n1,n2,n3);
        break;
        
        default : printf("\n Invalid operator");
    }

    return 0;
    


    }
    