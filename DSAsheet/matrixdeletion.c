#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows and columns of both the matrix\n");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements in the matrix1\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d\t", &a[i][j]);
        }
        scanf("\n");
    }
    printf("Enter the elements in the matrix2\n");
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d\t", &b[i][j]);
        }
        scanf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++){
     
            printf("%d\t", c[i][j]);

        }
        printf("\n");
    }
}
