#include<stdio.h>
int reverse(int n){
    int sum=0;

    
        while(n>0){
            int r;
            r=n%10;
            sum=sum*10+r;
            n=n/10;
            reverse(n);

        }
        
        

    
    return sum;
    

}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d",reverse(n));

}