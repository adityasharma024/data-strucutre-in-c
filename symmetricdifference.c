#include <stdio.h>
int main()
{
    int m, n, i, j, k = 0;
    printf("enter the number of elements of 1 set\n");
    scanf("%d", &m);
    int a[m];
    printf("Enter the elements");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the elements of 2 set\n");
    scanf("%d", &n);
    int b[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[100];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == n)
        {
            c[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                break;
            }
        }
        if (j == m)
        {
            c[k] = b[i];
            k++;
        }
    }
    for (k = 0; k<i; k++)
    {
        printf("%d", c[k]);
    }
}
