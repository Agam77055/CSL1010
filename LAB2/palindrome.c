#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int p[2*n -1];

    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }

    for(int i = 0; i < n - 1; i++){
        p[2*n - i - 2] = p[i];
    }
    for(int i = 0; i < 2*n - 1; i++){
        printf("%d ", p[i]);
    }
}