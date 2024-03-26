#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int result =even_odd(num);
}
void even_odd(int a){
    if(a%2==0){
        printf("the number is even");
    }
    else{
        printf("The number is odd");
    }
}
