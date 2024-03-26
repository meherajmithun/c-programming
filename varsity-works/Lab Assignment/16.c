#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers = ");
    scanf("%d %d %d",&a, &b, &c);
    if((a>b) && (a>c)){
     printf("a is maximum ");
    }
    else if((b>c) && (b>a)){
     printf("b is maximum ");
    }
    if((c>a) && (c>b)){
     printf("c is maximum ");
    }
}
