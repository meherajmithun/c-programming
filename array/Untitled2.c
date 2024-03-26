#include<stdio.h>
int main(){
    int a[6]={12,23,43,64,85,36};
    int value,i,position=-1;
    printf("Enter the value you want to find = ");
    scanf("%d",&value);

    for(i=0;i<6;i++){

      if(value==a[i]){
       position=i+1;
       break;
      }
      }
    if(position==-1){

     printf("Value not found");

    }
    else
    printf("The value %d is in the position %d",value,position);
}
