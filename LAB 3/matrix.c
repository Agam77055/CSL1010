#include <stdio.h>

int main(void)
{   
    int n, m;
    scanf("%d %d", &n, &m);

    int mat1[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    int a, b;
    scanf("%d %d", &a, &b);

    int mat2[a][b];
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    if(m != a)
    {
        printf("wrong matrix\n");
        return 1;
    }

    
    int result[n][b];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < b; j++)
        {
            result[i][j] = 0;
            for(int k = 0; k < m; k++){
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("result: \n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}   