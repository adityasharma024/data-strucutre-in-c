#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements of set 1\n");
    scanf("%d", &n);
    int a[n];
    int c[100];
    printf("Enter the elements of set 1\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m, j;
    printf("enter the number of elements of set 2\n");
    scanf("%d",&m);
    int b[m];
    printf("Enter the elements of set 2\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
            if (a[i] != b[j])

            {
                c[k] = a[i];
                k++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            printf("%d\n", c[k]);
        }
    }
}