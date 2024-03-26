#include<stdio.h>

int main() {
    int numbers[5] = { 3, 4, 10, 1, 95 };
    // [1, 2, 3, 4, 5]
    //  0, 1, 2, 3, 4
    int a = 2;
    // printf("%d\n", a);
    // printf("%d", numbers[3]);
   printf("%d\n", numbers[4]);
    for(int i=0; i<5; i++) {
        printf("%d\n", numbers[i]);
    }

    char characters[2] = { 'm', 'h' };
    printf("%c", characters[0]);
    printf("\n");

    float nums[2] = { 1.4, 1.2 };
    printf("%f", nums[0]);

    int sum=0, i=0;
    for(; i<5; i++) {
        sum = sum + numbers[i];
    }
    printf("The sum is: %d", sum);


}
