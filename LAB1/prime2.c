#include<stdio.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    if(num1 == 1){
        printf("One");
    }
    if(num1 == 1){
        printf("Zero");
    }

    int num2 = 0;
    int div = 0;
    for(int i = 2; i < num1; i++){
        if(num1 % i == 0){
            num2 = 1;
            div = i;
        }
    }
    if(num2 == 0){
        printf("%d\n", num1);
    }
    else{
        printf("%d\n", div);
    }
}