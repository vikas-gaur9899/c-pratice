#include <stdio.h>
#include <stdlib.h>
void mergesort(int arr[], int beg , int end ){
    if(beg>=end)return ;
    int mid = (beg + end)/2;
    mergesort(arr,beg,mid);
    mergesort(arr,mid+1,end);
    

}
void merge(int arr[], int beg , int end , int mid){
    int i = beg;
        
    int j = mid+1;
    int idx = 0 , k =0;
    int *temp = (int*)malloc(sizeof(int)*(end-beg));
    while(i<=mid&&j<=end){
        if(arr[i]<arr[j]){
            temp[idx] = arr[j];
            i++;


        }else{
            temp[idx]=arr[j];
            j++;
        }
        idx++;
    }
    while (i<=mid){
        temp[idx] = arr[i];
        idx++;
        i++;
    }
    while(j<=end){ temp[idx] = arr[j];
        idx++;
        j++;}
   k = 0;
   while(k<idx){
    arr[k+beg]= temp[k];
    k++;

   }
   free (temp);

}