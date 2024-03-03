#include <stdio.h>

void print(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = 2*(*a) - 3*(*b);
    *b = 3*(*a) - 2*(*b);
    
    int temp = *a; 
    *a = *b;
    *b = temp;
    
    printf("%d %d", *a, *b);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    print(&a, &b);
}
