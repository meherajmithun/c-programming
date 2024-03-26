#include<stdio.h>
int main(){
    float pH;
    printf("Enter pH number : ");
    scanf("%f",&pH);
    if((pH>0)&&(pH<7))
    {
     printf("The liquid is acidic");
    }
    else if((pH>7)&&(pH<=14))
    {
     printf("The liquid is basic");
    }
    else if(pH==7)
    {
     printf("The liquid is neutral");
    }
    else
    {
     printf("The input pH number is not valid ");
    }
    return 0;
}
