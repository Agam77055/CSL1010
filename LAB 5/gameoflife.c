#include <stdio.h>

int main(void)
{
    int m,n,k;

    //taking inputs of size of rows, columns and taking number of steps

    scanf("%d %d %d", &m, &n, &k);

    /*
        Initialzing the array and making each element of the array 0.
        This resolves our problem with corner and edge elements whose
        neighbouring elements don't exist or go out of the size of the array

        And initializing another identical array and adding elements to it after
        each step
    */

    int arr[m + 2][n + 2];
    int arr2[m + 2][n + 2];

    for(int i = 0; i < m + 2; i++)
    {
        for(int j = 0; j < n + 2; j++)
        {
            arr[i][j] = 0;
        }
    }

    //taking input the elements of the array

    for(int i = 1; i < m + 1; i++)
    {
        for(int j = 1; j < n + 1; j++)
        {
            scanf("%d", &arr[i][j]);
            arr2[i][j] = arr[i][j];
        }
    }

    //initializing the horizontal (left and right), vertical (top and bottom)
    //and the diagonal elements (top left, top right, bottom left and bottom right)

    int l,r,t,b;
    int tl, tr, bl, br;

    // putting the steps in a loop

    for(int q = 0; q < k; q++)
    {
        for(int i = 1; i < m + 1; i++)
        {
            for(int j = 1; j < n + 1; j++)
            { 
                int sum = 0;

                // assigning the value of each neighbouring element

                t = arr[i-1][j];
                l = arr[i][j-1];
                r = arr[i][j+1];
                b = arr[i+1][j];

                tl = arr[i-1][j-1];
                tr = arr[i-1][j+1];
                bl = arr[i+1][j-1];
                br = arr[i+1][j+1];

                // calculating the sum of the neighbouring elements (since their
                // value can be either 1 or 0

                sum = t + l + b + r + tl + tr + bl + br;

                // first checking the condition for a live cell

                if(arr[i][j] == 1)
                {   
                    /*
                        If the sum of neighbouring cells is less than 2,
                        the cell dies due to under population
                    */
                    if (sum < 2)
                    {
                        arr2[i][j] = 0;
                    }
                    /*
                        If the sum of neighbouring cells is more than 3,
                        the cell dies due to over population
                    */
                    if(sum > 3)
                    {
                        arr2[i][j] = 0;
                    }
                }
                /*
                    Now checking the conditions is the cell is dead
                */
                else
                {
                    /*
                        If the sum of neighbouring cells is equal to 3
                        the cell becomes live due to reproduction
                    */
                    if(sum == 3)
                    {
                        arr2[i][j] = 1;
                    }
                }
            }
        }

        // making the original array equal to the new array after 1 step

        for(int i = 1; i < m+1; i++)
        {
            for(int j = 1; j < n+1; j++)
            {
                arr[i][j] = arr2[i][j];
            }
        }
    }

    // printing out the elements of the array

    for(int i = 1; i < m+1; i++)
    {
        for(int j = 1; j < n+1; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

}