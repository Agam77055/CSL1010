#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    printf("%d %d %d\n", arr[i], arr[j], arr[k]);
                    return 0;
                }
            }
        }
    }

    printf("-1");
}