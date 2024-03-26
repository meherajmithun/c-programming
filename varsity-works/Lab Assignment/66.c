#include<stdio.h>
int main(){
    double a,b,sum,sub,mult;
    char op;
    printf("Enter a and b = ");
    scanf("%d %d",&a, &b);
    printf("Enter an operator (+,-,*,/)");
    scanf("%c",&op);
    switch (op)
    case'+':
    {
     printf("%lf + %lf = %lf",a, b,sum);
     break ;
    }

}
