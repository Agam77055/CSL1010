#include <stdio.h>

int decimalToOctal(int n)
{
    int j = 1;

    int new = 0;

    while(n != 0)
    {
        new += (n%8)*j;
        n = n / 8;
        j *= 10;
    }

    return new;
}

int octalToDecimal(int n)
{
    int j = 1;

    int new = 0;

    while(n != 0)
    {
        new += (n%10)*j;
        n = n / 10;
        j *= 10;
    }

    return new;
}

int main(void)
{
    int t, n;
    scanf("%d %d", &t, &n);

    if(t == 0)
    {
        n = decimalToOctal(n);
        printf("%d\n", n);
    }
    if(t == 1)
    {
        n = octalToDecimal(n);
        printf("%d\n", n);
    }
}
