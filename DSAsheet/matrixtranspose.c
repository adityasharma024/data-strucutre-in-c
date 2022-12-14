#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int c[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[j][i];
        }
    }
    for(i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}