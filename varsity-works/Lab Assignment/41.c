#include<stdio.h>
int main(){
    int fact=1,n,i;
    printf("Enter n = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){

     fact=fact*i;

    }
    printf("%d",fact);
}
