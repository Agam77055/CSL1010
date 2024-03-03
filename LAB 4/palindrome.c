#include <stdio.h>
#include<string.h>

int palindrome(int n, char name[], int z);

int main(void)
{
    char name[100];


    scanf("%s",name);
    int n = strlen(name);
    printf("%d", palindrome(n, name, 0));

}

int palindrome(int n, char name[], int z)
{
    if(name[z] == name[n-z-1])
    {
        z++;
        if(z == n/2)
        {
            return 1;
        }
        return palindrome(n, name, z);
    }
    return 0;
}