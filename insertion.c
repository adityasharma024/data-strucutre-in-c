#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }

}
int insertion(int arr[],int size,int element,int capacity,int index){
    if(index>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];

    }
    arr[index]=element;
}
int main(){
    int arr[100]={3,5,8,4,2,7};
    int size=6,element=11,index=3;
    insertion(arr,size,element,100,index);
    display(arr,size);
}