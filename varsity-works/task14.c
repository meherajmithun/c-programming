#include<stdio.h>
int main(){
    int num,reminder,a=0;
    printf("Enter any number = ");
    scanf("%d",&num);
    while(num !=0){
        reminder=num%10;
        a=a*10+reminder;
        num=num/10;
    }
    printf("reverse number is = %d",a);
}
