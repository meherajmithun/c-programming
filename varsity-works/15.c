#include<stdio.h>
int main(){
    int num1,num2,n1,n2,gcd,reminder,lcm;
    printf("Enter num1 and num2 ");
    scanf("%d %d",&num1,&num2);
    n1 = num1;
    n2 = num2;
    while(num2 !=0){
     reminder = num1%num2;
     num1=num2;
     num2=reminder;
    }
    gcd=num1;
    lcm=(n1*n2)/gcd;
    printf("%d\n",gcd);
    printf("%d",lcm);

}
