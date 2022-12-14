#include <stdio.h>
int main()
{
    int a[10], b[10], I[10], i, j, k = 0, m, n;
    printf("Enter the number of elements in set 1\n");
    scanf("%d", &m);
    printf("Enter the elements:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements in set 2\n");
    scanf("%d", &n);
    printf("enter now:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                I[k] = a[i];
                k++;
            }
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d", I[i]);
    }
}