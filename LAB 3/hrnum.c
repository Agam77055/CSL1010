#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int all[5050];
    int new[50];
    int k = 0;

    for(int i = 1; i <= 100; i++)
    {
        for(int j = i; j <= 100; j++)
        {
            all[k] = i*i*i + j*j*j;
            k++;
        }
    }

    for(int i = 0; i < 5049; i++)
    {
        for(int j = 0; j < 5049; j++)
        {
            if(all[j] > all[j + 1])
            {
                int temp = all[j];
                all[j] = all[j+1];
                all[j+1] = temp;
            }
        }
    }

    int z = 0;
    int count = 0;
    for(int i = 0; i < 5050; i++)
    {
        for(int j = i + 1; j < 5050; j++)
        {
            if(all[i] == all[j] && all[i] > 1729)
            {
                count++;
            }
        }
        if(count == 1)
        {
            new[z] = all[i];
            z++;
        }

        count = 0;
    }


    int hrnum[n];

    if(n <= 0)
    {
        return 0;
    }
    if(n > 17)
    {
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        hrnum[i] = new[i];
    }

    int temp = hrnum[n/2];
    hrnum[n/2] = hrnum[0];
    hrnum[0] = temp;

    

    for(int i = 0; i < n; i++)
    {
        printf("%d ", hrnum[i]);   
    }


}