#include<stdio.h>
int main(){
    int i,n;
    double num,sum=0,avg;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     printf("Enter %d number = ",i+1);
     scanf("%lf",&num);
     sum=sum+num;
    }
     avg=sum/n;
     printf("average is = %lf",avg);

}
