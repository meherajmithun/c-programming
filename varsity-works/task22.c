#include<stdio.h>
int main(){
    int num,digit,reverse_number=0;
    printf("Enter num = ");
    scanf("%d",&num);
    while(num!=0){
     digit=num%10;
     num=num/10;
     reverse_number=reverse_number*10+digit;

    }
    printf("%d",reverse_number);

    }
