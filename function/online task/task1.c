#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result =sum(a,b);
    printf("The sum is = %d",result);
}
int sum(int x,int y){
	int result =x+y;
    return result;
}
