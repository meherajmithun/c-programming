#include<stdio.h>
int main(){
    int i,sum=0,a[10]={10,9,8,7,6,5,4,3,2,1};

    for(int i=0;i<10;i++){
        printf("%d\n",a[i]);
        sum=sum+a[i];
    }

    printf("Their sum is = %d",sum);

}

#include<stdio.h>

 int main()
{
int a[3] , b[3] ,i = 0;

while(i<3)
{
printf("[%d]",i);
scanf("%d",&a[i]);

b[i] = a[i];

i++;
}
i = 0;
printf("\n[A ARRAY]");
while (i<3)
{
printf(" %d ",a[i]);
i++;
}

i = 0;
printf("\n[B ARRAY]");
while(i<3)
{

printf(" %d ",b[i]);
i++;
}

return 0;
}
