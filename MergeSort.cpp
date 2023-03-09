#include<iostream>
using namespace std;
void merge(int *arr , int s, int e){
     int mid = (s+e)/2;
     int len1 = mid-s+1;
     int len2 = e-mid;
    // make new two array
    int *first = new int[len1];
    int *second = new int[len2];
    // copy 
    int mainarray = s;
    for(int i =0;i<len1;i++){
        first[i]=arr[mainarray++];
    }
    mainarray = mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[mainarray++];
    }

    // merge 
    int index1 = 0;
    int index2 = 0;
    mainarray = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarray++] =first[index1++];
        }
        else{
            arr[mainarray++]= second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarray++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarray++] = second[index2++];

    }
    delete []first;
    delete []second;
}
// merge two sorted array 
 void mergesort(int *arr,int s, int e){
    if(s>=e)
    return;
    int mid = (s+e)/2;
    // left part
    mergesort(arr, s,mid);
    // right part
    mergesort(arr , mid+1,e);
    // merge
    merge(arr,s,e);
 }

int main(){
    int arr[8] = {7,8,4,4,6,8,1,5};
    int n =8;
    mergesort(arr ,0, n-1);
      for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;
  return 0;
}
