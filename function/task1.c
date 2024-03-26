#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

        int addition =add(a,b);
        int subtraction =sub(a,b);
        int multiplication =mult(a,b);
        int division =divi(a,b);
        
        printf("summation is = %d\n",addition);
        printf("subtraction is = %d\n",subtraction);
        printf("multiplication is = %d\n",multiplication);
        printf("division is = %d\n",division);
}
int add(int a,int b){
    return (a+b);
}
int sub(int x,int y){
    return (x-y);
}
int mult(int x,int y){
    return (x*y);
}
int divi(int x,int y){
    return (x/y);
}

