#include<stdio.h>
int main(){
	int i,a[5];
	for(i=0;i<5;i++){
	 printf("Element - %d = ",i);
	 scanf("%d",&a[i]);
	}
	int maximum_array=maximum(a);
	printf("maximum elements = %d",maximum_array);
}
int maximum(int a[5]){
	int i,max=a[0];

	for(i=1;i<5;i++){
	 if(a[i]>max){
	  max=a[i];
	 }
	 else {
	  max=a[0];
	 }
	}
	return max;
}
