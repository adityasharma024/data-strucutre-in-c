#include <stdio.h>
#include <stdlib.h>

void BinarySearch(int arr[],int key,int s,int e){
   
   int mid;

   if(s >e){
       
        printf("Cannot Find The Number");
        
   } else {
       
      
      mid = (s + e)/2;
    
      
      if(arr[mid]==key){
          
            printf("Element Is At The Index: %d ",mid);
            exit(0);
            
        }else if(arr[mid] >key){
            
            BinarySearch(arr,key, s, mid-1);
        
        }else{
            
            BinarySearch(arr,key, mid+1, e);
        }   
    }  
}


void main(){

   int arr[50],beg,mid,end,i,n,num;

   printf("Enter The Size Of The Given Array ");
   scanf("%d",&n);

   printf("Enter The Values In Sorted Sequence \n");

   for(i=0;i<n;i++)
   {   
       scanf("%d",&arr[i]);
   }   


   beg=0;
   end=n-1;

   printf("Enter The Value To Search Using Binary Search: ");
   scanf("%d",&num);

   BinarySearch(arr,num,beg,end);

}