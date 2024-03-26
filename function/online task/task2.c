#include<stdio.h>
int main(){
	int a;
	printf("Enter any  number = ");
	scanf("%d",&a);
	int r =square(a);
	int summation = sum(a);
	printf("The square of the function is = %d\n",r);
	printf("The sum of number is = %d\n",summation);
}
int square(int a){
	int result=a*a;
	return result;
}
int sum(int a){
	int s =a+a;
	return s;
}

