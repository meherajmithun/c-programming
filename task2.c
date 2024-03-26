#include<stdio.h>
int main(){
    int i,a[5]={10,15,56,34,25};
    int max=15,min=10;
    for(i=0;i<5;i++){

    if(a[i]<min){
     min=a[i];
    }
    else if(a[i]>max){
     max=a[i];
    }
    }
    printf("minimum array is %d\n",min);
    printf("maximum array is %d",max);

}
