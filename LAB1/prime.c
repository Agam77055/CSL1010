#include<stdio.h>

int main(void){
    int num1;
    printf("Number: ");
    scanf("%d", &num1);

    int num2 = 0;
    for(int i = 2; i < num1; i++){
        if(num1 % i == 0){
            num2 = 1;
        }
    }
    if(num2 == 0){
        printf("Prime");
    }
    else{
        printf("Composite");
    }
}

