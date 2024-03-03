#include <stdio.h>

double geometricSum(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return 1 + geometricSum(n - 1) / 3;
}

int main(void)
{
    int n;
    scanf("%d" ,&n);

    printf("%lf", geometricSum(n));
}   