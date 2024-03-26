#include<stdio.h>
int  main(){
    int i,n,a[100];
    printf("Enter array size = ");
    scanf("%d",&n);
    printf("Enter %d array = \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array you entered are = ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Array in revese order are = ");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}

