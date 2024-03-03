#include <stdio.h>

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    if(b == 0)
    {
        return a;
    }

    if (a == b)
    {
        return a;
    }

    if(a < b)
    {
        return gcd(a, b%a);
    }
    else
    {
        return gcd(a%b, b);
    }
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a < 0)
    {
        a = (-1)*a;
    }
    if(b < 0)
    {
        b = (-1)*b;
    }

    printf("%d", gcd(a, b));
}