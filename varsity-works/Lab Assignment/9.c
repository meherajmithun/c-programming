#include<stdio.h>
int main(){
    int number;
    printf("Enter the number = ");
    scanf("%d",&number);
    if(number>0){
     printf("The number is positive");
    }
    else if(number<0){
     printf("The number is negative");
    }
    else if (number==0){
     printf("The number is zero");
    }
    return 0;
}
