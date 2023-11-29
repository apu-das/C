#include <stdio.h>

int main()
{
    int A[3][3];   // Matrix 1
    int B[3][3];
    int row, col;


    /* Input elements in first matrix from user */
    printf("Enter elements in matrix A of size \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }


    for (row=0; row<3;row++)
        {
            for (col = 0; col < 3; col++)
            {
                B[col][row] = A[row][col];
            }

       }



    printf("\nTranspose of A = \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }

    return 0;
}

