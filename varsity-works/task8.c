#include<stdio.h>
int main(){
    int i,a,b;
    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);
    if(a<b){

    for(i=a;i<=b;i++)
    {
     if(i%2!=0)
    {
     printf("%d\n",i);
    }

    }
  }
  else if(a>b){

  for(i=a;i>=b;i=i-1)
    {
     if(i%2!=0)
    {
     printf("%d\n",i);
    }

    }

  }

}
