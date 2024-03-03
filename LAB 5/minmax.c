#include <stdio.h>

int* maximum(int arr[], int n)
{
    int max = arr[0];
    int *point1;
    int k = 0;

    for(int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            k = i;
        }
    }

    point1 = &k;
    return point1;
}

int* minimum(int arr[], int n)
{
    int min = arr[0];
    int l = 0;
    int *point2;

    for(int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            l = i;
        }
    }

    point2 = &l;
    return point2;    
}

int main(void)
{
    int input;
    scanf("%d", &input);

    int arr[input];

    for(int i = 0; i < input; i++)
    {
        scanf("%d", arr + i);
    }

   printf("%ld ", minimum(arr, input) - maximum(arr, input));

}