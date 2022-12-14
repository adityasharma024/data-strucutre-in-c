#include<stdio.h>
#include<math.h>
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return pow(n,p);
}
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int p;
    scanf("%d",&p);
    printf("%d",power(n,p));

}