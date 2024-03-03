#include<stdio.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    int num2 = 1;
    for(int i = 1; i <= num1; i++){
        num2 *= i;
    }
    printf("%d\n", num2);
}
