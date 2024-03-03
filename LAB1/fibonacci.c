#include<stdio.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    int num2 = 0;
    int num3 = 1;
    while(num3 <= num1){
        printf("%d ", num2);
        printf("%d ", num3);
        
        num2 += num3;
        num3 += num2;
    }
}