#include<stdio.h>
int main(){
    int matrix[3][3],i,j;
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3;j++)
        {
        printf("Enter matrix number ");

        scanf("%d",&matrix[i][j]);

        }
    }
    printf("matrix is :\n");
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3;j++){
    printf("%d ", matrix[i][j]);

        }
        printf("\n");
    }
    printf("\n");


}
