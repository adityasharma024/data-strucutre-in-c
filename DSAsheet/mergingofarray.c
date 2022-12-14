#include<stdio.h>
int main(){
    int m,n;
    int o=m+n;
    printf("enter the number of elements of array 1\n");

    scanf("%d",&m);
    printf("enter the number of elements of array 2\n");
    scanf("%d",&n);
    int a[m];
    int b[n];
    int c[o];
    printf("please enter the array in ascendin or descending order\n");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("please enter the arrya in ascending or desecending order");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        c[i]=a[i];
       

    } 
        for(int i=0;i<n;i++){
            c[i+m]=b[i];

        }
    for(int i=0;i<o;i++){
        printf("%d",c[i]);
    }
    

    

}