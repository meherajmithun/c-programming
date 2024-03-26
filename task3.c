#include<stdio.h>
int main(){
    int i,a[5]={5,10,15,5,684};
    int largest=a[0],second_largest=a[1];
    for(i=0;i<5;i++){
      if(a[i]>a[0]){
     largest=a[i];
     }
    }
    for(i=0;i<5;i++){
    if(a[i]>a[1] && a[i]!=largest){
     second_largest=a[i];
    }
    }
    printf("second largest is %d",second_largest);
}
