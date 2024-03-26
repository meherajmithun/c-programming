#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the celsius temparature : ");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("The temparature in farenhit scale : %.2f",f);
}
