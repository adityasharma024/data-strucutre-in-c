#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
        
    }
        return -1;
}
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    printf("Enter the key\n");
    scanf("%d",&key);
    linearSearch(a,n,key);
    printf("Element found at position:");
    printf("%d",linearSearch(a,n,key));
}