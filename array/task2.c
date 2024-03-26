#include<stdio.h>
int main(){
    int i,array2[5],array1[5];
    for(i=0;i<5;i++){
     printf("Enter array1 %d element = ",i+1);
     scanf("%d",&array1[i]);
    }
    printf("array1 = ");
    for (i=0; i<5; i++){
     printf("%d ",array1[i]);
    }
    for(i=0;i<5;i++){
     array2[i]=array1[i];
    }
    printf("\narray2 = ");
    for(i=0;i<5;i++){
     printf("%d ",array2[i]);
    }
    return 0;

}
