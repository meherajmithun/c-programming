#include<stdio.h>
int main(){
    int b,h;
    float area;
    printf("Enter base and height of the triangle = ");
    scanf("%d %d",&b ,&h);

    area=0.5*b*h;
    printf("area of the triangle is = %f",area);
}
