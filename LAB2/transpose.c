#include <stdio.h>

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);

    int mat[10][10];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &mat[j][i]);
        }
    }
    // for(int i = 0; i < n; i ++){
    //     for(int j = 0; j < m; j++){
    //         if(j > i){
    //             int temp = mat[i][j];
    //             mat[i][j] = mat [j][i];
    //             mat[j][i] = temp;
    //         }
    //     }
    // }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}