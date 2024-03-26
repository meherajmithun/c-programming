#include<stdio.h>
int main(){
    char c;
    printf("Enter c = ");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
     printf("c is lowercase ");
    }
    else if(c>='A' && c<='Z'){
     printf("c is Uppercase");
    }
}

