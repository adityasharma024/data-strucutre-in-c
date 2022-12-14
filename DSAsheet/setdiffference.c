#include <stdio.h>
int main()
{
    int m, n, j, k = 0;
    int a[m], b[n], c[k];
    printf("Enter the number of elements of set 1\n");
    scanf("%d", &m);
    printf("please enter the elements of set1\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements of set 2\n");
    scanf("%d", &n);
    printf("please enter the elements of set 2\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                break;

            }
            if(a[i]!=b[j]){
                c[k]=a[i];
                k++;
            }
           
           
        }
    
    }
    for(int i=0;i<k;i++){
        printf("%d",c[i]);
    }
}