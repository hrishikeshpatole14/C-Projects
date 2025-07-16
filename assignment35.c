#include<stdio.h>

int main(){

    int n ;

    printf("Enter the number of week to find its name buddy :");
    scanf("%d",n);

    switch(n){
        case 1 : 
        printf("\n Its a monday buddy");
        break;

          case 2 : 
        printf("\n Its a tuesday buddy");
        break;

          case 3 : 
        printf("\n Its a wednesday buddy");
        break;

          case 4 : 
        printf("\n Its a thursday buddy");
        break;

          case 5 : 
        printf("\n Its a friday buddy");
        break;

          case 6 : 
        printf("\n Its a satday buddy");
        break;

          case 7 : 
        printf("\n Its a sunday buddy");
        break;

        default:
        printf("\n Invalid choice buddy");
    }
    return 0;


}