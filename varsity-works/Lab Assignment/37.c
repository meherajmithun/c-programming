#include<stdio.h>
int main(){
    int a,b,n;
    printf("enter n = ");
    scanf("%d",&n);
    b=n%10;
    while(n>10){
     n=n/10;
    }
    a=n;
    printf("%d %d",a,b);
}
