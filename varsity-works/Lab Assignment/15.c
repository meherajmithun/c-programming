#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a and b = ");
    scanf("%d %d",&a, &b);
    if(a%b==0){
     printf("Divisible ");
    }
    else {
     printf("Not divisible");
    }
}
