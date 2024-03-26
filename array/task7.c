#include<stdio.h>
int main(){
    int i,a[5]={5,9,7,9,25};
    int smallest=a[0],second_smallest=a[1];
    for(i=0;i<5;i++){
     if(a[i]<a[0]){
        smallest=a[i];

     }
     }
     for(i=0;i<5;i++){
      if(a[i]<a[1] && a[i] !=smallest){
       second_smallest=a[i];
      }
     }
     printf("second smallest = %d",second_smallest);

}
