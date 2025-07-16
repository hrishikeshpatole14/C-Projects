#include<stdio.h>

int main()
{
    int r , choice;
    float area , circumference , volume;

    printf("Enter radius you want:");
    scanf("%d",&r);

    printf("Enter your choice:\n");
    printf("1.Area of Circle\n");
    printf("2.Circumference of Circle\n");
    printf("3.Volume of Sphere\n");
    scanf("%d",&choice);

    switch(choice){
        case 1 : area = 3.14*r*r;
        printf("\n Area of circle is %.2f",area);
        break;

        case 2: circumference = 2*3.14*r;
        printf("\nCircumference of circle is %.2f",circumference);
        break;

        case 3:  volume = (4.0)/(3.0)*3.14*r*r*r;
        printf("\n Volume of sphere is %.2f",volume);
        break;

        default:
        printf("\n Invalid choice");


    }

    return 0;


    
}