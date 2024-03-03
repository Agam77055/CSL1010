#include<stdio.h>

//  Complete the following two functions:

// function to increment the value of the pointer a
void increment(int *a) {
    *a = *a + 1;
}

// update the value at pointer a to sum of values at a and b
// update the value at pointer b to difference of values at a and b
// In other words a' = a+b, b' = a-b
void sum_it(int* a, int* b) {
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}


// -------------Don't Modify Below This Line-----------------------------------------------------
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {   int a;
        scanf("%d", &a);
        increment(&a);
        printf("%d\n", a);
        int x, y;
        scanf("%d %d", &x, &y);
        sum_it(&x, &y);
        printf("%d %d\n", x, y);
    }
    return 0;
}
