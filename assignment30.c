 #include<stdio.h>
 
 int main(){

    int m1 , m2 , m3;
    float total , avg , percent;

    printf("Enter marks of 3 subjects :");
    scanf("%d%d%d",&m1,&m2,&m3);

    total = m1 + m2 + m3;

    avg = total/3;

    percent = (total/(3*100.0))* 100;



    

    printf("\nTotal marks secured is %.f in 3 subjects:\n",total);
    
    printf("\nAverage is %.f:\n",avg);

     printf("\nPercentage is %.f:\n",percent);

     if(percent>75 && percent<100)
     printf("\n You are in 1St Class\n");
     else if(percent>50 && percent<75)
     printf("\n You are in 2nd Class\n");
     else if(percent>35 && percent<50)
     printf("\nYou are in Pass Class\n");
     else
     printf("\nYou have Fail\n");


    return 0;

 }