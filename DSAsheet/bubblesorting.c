#include<stdio.h>
int main(){

    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    for(int i=0;i<n;i++){
        if(a[i+1]<a[i]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    printf("Sorted Array is:-\n");
    for(int i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
}