#include<stdio.h>

void main(){
    char ch;
    printf("Enter the value of a = ");
    scanf("%d",&ch);
    if ((ch=='a')||(ch=='e')|| (ch=='i')|| (ch=='o')|| (ch=='u'))
    {

         printf("ch is a vowel");

    }

    else
    {
    printf("ch is a consonant");
    }
}
