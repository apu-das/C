/**
 * C program to find upper triangular matrix
 */

#include <stdio.h>
int main()
{
    int A[3][3];
    int row, col, isUpper;

    /* Input elements in matrix from user */
    printf("\n Enter elements in matrix of size \n ");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf(" %d", &A[row][col]);
        }
    }

        printf("\n Matrix A is: \n");
        for(row=0; row<3; row++)
        {
            for(col=0; col<3; col++)
            {
                printf("%d ", A[row][col]);
            }

            printf("\n");
        }

    /* Check Upper triangular matrix condition */
    isUpper = 1;
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            /*
             * If elements below the main diagonal (col<row)
             * is not equal to zero then it is not upper triangular matrix
             */
            if(col<row && A[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }

    /* Print elements of upper triangular matrix  */
    if(isUpper == 1)
    {
        printf("\nThe matrix is Upper triangular matrix.\n");
    }
    else
    {
        printf("\nThe matrix is not Upper triangular matrix.");
    }

    return 0;
}
