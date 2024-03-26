#include<stdio.h>
int main(){
    int n,i,j,a[100];
    printf("Enter array size = ");
    scanf("%d",&n);
    printf("Enter %d array = \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
         if(a[i]==a[j]){
         count++;
        }
        }
    }
    printf("Total duplicate array = %d",count);
}
