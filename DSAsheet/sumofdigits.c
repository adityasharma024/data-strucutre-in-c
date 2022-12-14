#include<stdio.h>
int summing(int n){
    int sum=0;

    
        while(n>0){
            int r;
            r=n%10;
            sum=sum+r;
            n=n/10;
            summing(n);

        }
        
        

    
    return sum;
    

}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d",summing(n));

}