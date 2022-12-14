#include<stdio.h>
#include<string.h>
int pallindrome(char a[]){
    int st=0;
    int e=strlen(a)-1;
    while(st<=e){
        if(a[st]!=a[e]){
            return 0;
        }
        else {
            st++;
            e--;
        }
    }
    return 1;

}
int main(){
    char s[20];
    // int n=strlen(s);
    scanf("%c",&s);
    printf("%d",pallindrome(s)); 


}