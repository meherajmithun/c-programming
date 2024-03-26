#include<stdio.h>
int main(){
    char ch;
    printf("Enter character = ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
     printf("%c is vowel",ch );
    }
     if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
     printf("%c is vowel",ch );
    }
    else {
     printf("character is consonant");
    }
    return 0;
}
