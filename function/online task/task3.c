/*Write a program in C to swap two numbers using a function.
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4
After swapping: n1 = 4, n2 = 2 */

#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before swapping a = %d ,b = %d\n",a,b);
	swap(a,b);
}
void swap(int x, int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swapping a = %d, b = %d\n",x,y);
}
