#include<stdio.h>
int main(){
    int n,i,a[100],max=a[0],second_max=a[0];
    printf("Enter array size = ");
    scanf("%d",&n);
    printf("Enter %d Elements = \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){
        if((a[i]>second_max) && a[i] !=max){
            second_max=a[i];
        }
    }
    printf("second largest array is = %d",second_max);
}
