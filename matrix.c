#include <stdio.h>

int main()
{
    int A[3][3];   // Matrix 1
    int B[3][3];   // Matrix 2
    int C[3][3];   // Resultant matrix

    int row, col, i, sum;


    /* Input elements in first matrix from user */
    printf("Enter elements in matrix A of size \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Input elements in second matrix from user */
    printf("\nEnter elements in matrix B of size \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }

    printf("First matrix is:  \n");
    for(row=0; row<3; row++)
    {
        printf("\n");
        for(col=0; col<3; col++)
        {
            printf("%d\t", A[row][col]);
        }
    }



      printf("\n Second matrix is:  \n");
    for(row=0; row<3; row++)
    {
        printf("\n");
        for(col=0; col<3; col++)
        {
            printf("%d\t", B[row][col]);
        }
    }

    /*
     * Multiply both matrices A*B
     */
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            sum = 0;
            /*
             * Multiply row of first matrix to column of second matrix
             * and store sum of product of elements in sum.
             */
            for(i=0; i<3; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }

    /* Print product of the matrices */
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
