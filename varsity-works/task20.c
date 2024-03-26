#include<stdio.h>
int main()

{
    int n,sum=0;
    double average;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=1;i<10;i++)
    {
     sum=sum+i;
    }
    printf("The sum is %d\n",sum);

    average=sum/n;
    printf("The average is %.2lf",average);

}

