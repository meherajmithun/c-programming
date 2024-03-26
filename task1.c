#include<stdio.h>
int main(){
    int i,n,a[n];
    printf("Enter array size n ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter  array number %d = ",i+1);
    scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
    printf("%d\n",a[i]);
    }

}
