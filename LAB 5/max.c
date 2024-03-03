#include <stdio.h>

int max(int *a, int n)
{
    int max = 0;

    for(int i = 1; i < n; i++)
    {
        if(*a < *(a + i))
        {
            max = i;
        }
    }

    return max;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", *(arr + max(arr, n)));
}