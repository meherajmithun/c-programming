#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter m and n = ");
    scanf("%d %d",&m, &n);
    for(int i=m;i<=n;i++){
     sum =sum+i;
    }
    printf("sum is = %d",sum);
}
