#include<stdio.h>

int main(void){
    int num_arr[10];
    int num1;
    int num2;

    for(int i = 0; i < 5; i++){
        printf("Input: ");
        scanf("%d", &num_arr[i]);
    }

    printf("Number of positions to rotate: ");
    scanf("%d", &num1);

    for(int i = 4; i >= 0; i--){
        num_arr[i + num1] = num_arr[i];
    }
    for(int i = 0; i < num1; i++){
        num_arr[i] = num_arr[5 + i];
        num_arr[5 + i] = 0;
    }
    
    
    for(int i = 0; i < 5; i++){
        printf("%d \n", num_arr[i]);
    }
}