#include<stdio.h>
int main(){
    int a,b,c,d;
    float avg;
    printf("Enter four numbers = ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg = (a+b+c+d)/4;
    printf("The average of the numbers are = %.2f",avg);
}
