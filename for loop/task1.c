#include<stdio.h>
int main(){
    int pHnumber;
    printf("enter a ph number = ");
    scanf("%d",&pHnumber);
    if(pHnumber>=0 && pHnumber<7){
        printf("The liquid is acidic");

    }
    else if(pHnumber<=14 && pHnumber>7){
    printf("the liquid is alakline ");

    }
    else{
    printf("the liquid is neutral ");
    }
}
