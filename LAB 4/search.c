#include <stdio.h>

int search(int m, int arr[], int n, int z);

int main(void){
    int m, n;
    scanf("%d %d", &m, &n);

    int num_arr[m];

    for(int i = 0; i < m; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    printf("%d", search(m, num_arr, n, 0));
}

int search(int m, int arr[], int n, int z)
{
    if(arr[z] == n)
    {
        return z;
    }

    z++;
    if(z == m)
    {
        return -1;
    }

    return search(m, arr, n, z);
}