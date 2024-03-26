#include<stdio.h>
int area(int a, int b){
   float result = 0.5*a*b;
    return result;
}
int result(int m,int n){
    float x = m*n;
    return x;
}
int main(){
    int base,height,m,n;
    scanf("%d %d",&base,&height);
    scanf("%d %d",&m,&n);
    float x=result(m,n);
    printf("x = %.1lf\n",x);
    float result =area(base,height);
    printf("area is = %.1lf",result);
}
