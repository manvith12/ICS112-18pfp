//to find determinant of a matrix

#include <stdio.h>

int determinant(int matrix[10][10], int n);

int main()
{
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int a[10][10];
    printf("Enter the elements of the matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    int det = determinant(a, n);
    printf("Determinant of the matrix is: %d\n", det);
    return 0;
}

int determinant(int matrix[10][10], int n)
{
    int det = 0;
    if (n == 1)
    {
        return matrix[0][0];
    }
    else if (n == 2)
    {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int submatrix[10][10];
            for (int j = 1; j < n; j++)
            {
                int k = 0;
                for (int l = 0; l < n; l++)
                {
                    if (l != i)
                    {
                        submatrix[j - 1][k] = matrix[j][l];
                        k++;
                    }
                }
            }
            if (i % 2 == 0)
                det += matrix[0][i] * determinant(submatrix, n - 1);
            else
                det -= matrix[0][i] * determinant(submatrix, n - 1);
        }
    }
    return det;
}