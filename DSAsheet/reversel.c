#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements in an array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
            }

        }
    
      
    }
}