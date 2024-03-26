#include<stdio.h>
int main(){
    int n,a,i,freq=0,array[20];
    printf("Enter how many arrays you want to inpu = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     printf("Enter %d position array = ",i);
     scanf("%d",&array[i]);
    }
    printf("Enetr the array you want to find frequency ");
    scanf("%d",&a);
    for(i=0;i<n;i++){
     if(a==array[i]){
      freq=freq+1;
     }
     }
     printf("Frequency of %d is %d",a,freq);
     return 0;
}
