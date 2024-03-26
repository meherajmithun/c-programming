#include<stdio.h>
int main(){
    int a,b,temp=0;
    printf("Enter the numbers :");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping the numbers are a =%d and b = %d",a,b);
}
