#include<stdio.h>
void main(){
    int a,b;
    char ch='c';
    while(ch!='q'){
    printf("Enter two numbers ");
    scanf("%d %d",&a, &b);
    printf("The sum is =%d\n",a+b);
      printf("Enter c to run again.enter q to quit ");
    scanf(" %c",&ch);


    }

}
