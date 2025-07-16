#include<stdio.h>



int main(){

    char ch ;
     

printf("Enter any character to finds it ascii value:");
scanf("%c",&ch);

    

    if(ch>=48 && ch<=58)
     printf("\n %c is a digit",ch);

     else if (ch >= 65 && ch <= 90) 
        printf("\n %c is a uppercase letter.\n",ch);

        else if(ch>=97 && ch<=122)
         printf("\n %c is a lowercase letter.\n",ch);

          else 
        printf("It is neither a digit nor an alphabet letter.\n");
    
        return 0;
}


/*
0 = 48
1 =49
2=50 
3 = 51
4 - 52
5    53
6
7
8
9 - 57
10 - 58
 11 - 59
 12   - 60
 13 - 61 
  14 - 62
  15 - 63
  16 - 64 
  A   - 65

    + 25
  Z - 90

  a - 65 + 32 = 97
  z - 122











*/
