#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array:");

    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current&&j==0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    printf("Sorted Array is:-\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}