#include<stdio.h>
int main(){
    int a[100],n,i,max=a[0],min=a[0];
    printf("Enter array size ");
    scanf("%d",&n);
    printf("Enter %d array \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        
    }
    for(i=1;i<n;i++){
    if (max<a[i]){
        max=a[i];
     }
    }
    for(i=1;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
    }
    printf("maximum array is = %d\n",max);
    printf("Minimum array is = %d",min);
}
