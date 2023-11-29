#include <stdio.h>

int main()
{
    int A[3][3];
    int B[3][3];

    int row, col, isEqual;

    /* Input elements in first matrix from user */
    printf("\n Enter elements in matrix A: ");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B:");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    /* Assumes that the matrices are equal */
    isEqual = 1;

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            /*
             * If the corresponding entries of matrices are not equal
             */
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }

    /*
     * Checks the value of isEqual
     * As per our assumption if isEqual contains 1 means both are equal
     * If it contains 0 means both are not equal
     */
    if(isEqual == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }

    return 0;
}
