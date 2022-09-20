#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements now\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int key;
    printf("enter the elements to be searched\n");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("%d",i);
        }
    }
}