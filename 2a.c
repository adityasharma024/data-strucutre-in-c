#include<stdio.h>
int main(){
    int m,n;
    int sum=0;
    float average;

    printf("Enter the number of row\n");
    scanf("%d",&m);
    printf("Enter the number of col\n");
    scanf("%d",&n);
    int a[m][n];
    printf("enter the elements");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",a[i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    average=sum/m*n;
    printf("%f",average);

}