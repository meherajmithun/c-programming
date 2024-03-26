#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter number = ");
    scanf("%d",&n);
    a = n%10;
    while (n>10)
    {
      n=n/10;
    }
    b = n;
    printf("%d",a+b);
}
