#include<stdio.h>

int main(void){
    int num_arr[5];
    int num1 = 0;

    for(int i = 0; i < 5; i++){
        printf("Input: ");
        scanf("%d", &num_arr[i]);
    }

    for(int i = 0; i < 5; i ++){
        for(int i = 0; i < 5; i++){
            if(i + 1 == 5){
                break;
            }
            if(num_arr[i] < num_arr[i+1]){
                num1 = num_arr[i + 1];
                num_arr[i + 1] = num_arr[i];
                num_arr[i] = num1;
            }
        }
    }
    
    printf("Maximum: %d\n", num_arr[0]);
    printf("Minimum: %d\n", num_arr[4]);
}
