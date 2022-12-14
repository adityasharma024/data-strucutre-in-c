#include <stdio.h>
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;

    while (s <= e){
        int mid = (s + e) / 2;

        if (arr[mid] == key){

            return mid;
        }

        else if (arr[mid] > key){

            e = mid - 1;
        }
        else
            s = mid + 1;
    }
}
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:-\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int key;
    printf("Enter the key\n");
    scanf("%d", &key);
    printf("Element found at position:");
    printf("%d", binarySearch(a, n, key));
}