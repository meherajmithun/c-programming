#include<stdio.h>
int main(){
	int num,count=0,i=2;
	scanf("%d",&num);
	result(num,count);
}
void result(int num,int count,int i){
	for(i=2;i<num;i++){
	 if(num%i==0){
	  count++;
	 }
	}
	if(count==0){
	 printf("The number is prime");
	}
	else {
	 printf("The number is not prime ");
	}
}

