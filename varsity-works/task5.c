#include<stdio.h>
int main(){
    int height,width;
    float area;
    printf("Enter the height and width of the triangle = ");
    scanf("%d%d",&height,&width);
    area=0.5*height*width;
    printf("The area of the triangle is =%.2f",area);

}
