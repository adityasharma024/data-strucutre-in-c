#include<stdio.h>
int factorial(int n){
    if(n==0&&n==1){
        return 1;
    }
    return n*factorial(n-1);

}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d",factorial(n));

}