#include <stdio.h>
int main()
{
    int n, i, j, k;
    float a[20][20], x[20], m, s = 0.0;
    printf("\n Enter the rank of the coefficient matrix:");
    scanf("%d", &n);
    printf("\n enter the element of the augmented matrix rowwise:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            m = a[j][i] / a[i][i];
            for (k = 1; k <= n + 1; k++)
            {
                a[j][k] = a[j][k] - m * a[i][k];
            }
        }
    }
    printf("\n the upper triangular matrix is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
            printf("%4.3f\t", a[i][j]);
        printf("\n");
    }
    x[n] = a[n][n + 1] / a[n][n];
    for (i = n - 1; i >= 1; i--)
    {
        s = 0.0;
        for (j = i + 1; j <= n; j++)
            s = s + a[i][j] * x[j];
        x[i] = (a[i][n + 1] - s) / a[i][i];
    }
    printf("\n\n the required solution is:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d]=%4.3f\n", i, x[i]);
    }
}
