#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    // int num[n][n+1];
    // for(int i = 0; i < n; i++){
    //     num[i][0] = 1;
    //     for(int j = 0; j <= i; j++){
    //         printf("%d ", num[i][j]);
    //     }
    //     for(int j = 0; j <= i; j++){
    //         num[i+1][j + 1] = num[i][j] + num[i][j+1];
    //     }
    //     printf("\n");
    // }

    // int num1[10];
    // int num2[10];
    // num1[0] = 1;
    // num2[0] = 1;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j <= i; j++){
    //         printf("%d ", num1[j]);
    //     }
    //     for(int j = 0; j <= i; j++){
    //         num2[j + 1] = num1[j] + num1[j + 1];
    //     }
    //     for(int j = 0; j <= i; j++){
    //         num1[j] = num2[j];
    //         num1[i+1] = 1;
    //     }
    //     printf("\n");
    // }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", 1 + (i - j)*j + (i-j)*j/4);
        }
        printf("\n");
    }
}



// num[j + 1] = num[j] + num[j+1];