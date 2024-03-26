#include<stdio.h>
void main(){
    char a;
    float b;
    char c;
    printf("Enter a = ");
    scanf("%d",&a);

    b=(float)a+a+a;
    printf("Your float value is =%.2f\n",b);

    c=(char)b;
    printf("The character value is = %c",c);
}
