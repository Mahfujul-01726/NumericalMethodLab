#include <stdio.h>
int main()
{

    int i, j, k, n;
    float A[20][20], c, x[10], sum = 0.0;
    printf("\nEnter the order of matrix:");
    scanf("%d", &n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= (n + 1); j++)
        {
            printf("A[%d[%d] :", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            if (i > j)
            {
                c = A[i][j] / A[i][j];
                for (k = 1; k <= n + 1; k++)
                {
                    A[i][j] = A[i][k] - c * A[j][k];
                }
            }
            printf("\n");
            printf("for j=%d and i=%d", j, i);
            printf("\n\n");
            for (int x = 1; x <= n; x++)
            {
                for (int y = 1; y <= (n + 1); y++)
                {
                    printf("%f\t", A[i][j]);
                }
                printf("\n");
            }
        }
    }

    x[n] = A[n][n + 1] / A[n][n];
    for (i = n - 1; i >= 1; i--)
    {
        sum = 0;
        for (j = i + 1; j <= n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        x[i] = (A[i][n + 1] - sum) / A[i][j];
    }

    printf("\nThe solution is: \n");
    for (i = 1; i <= n; i++)
    {
        printf("\nx%d=%f\t", i, x[i]);
    }

    return 0;
}