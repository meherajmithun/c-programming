#include<stdio.h>
int main(){
    int year;
    printf("Enter The year = ");
    scanf("%d",&year);

    if(((year%4==0)||(year%400==0))&&(year%100!=0))
        printf("the year is leap year");

    else
        printf("The year is not leap year");


return 0;
}
