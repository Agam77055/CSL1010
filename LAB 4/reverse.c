#include <stdio.h>

void reverse(int arr[], int n, int z)
{
    if(z == n)
    {
        return;
    }
    printf("%d ",arr[n-1-z]);
    reverse(arr, n, z+1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int input_array[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", input_array+i);
    }

    reverse(input_array, n, 0);
}