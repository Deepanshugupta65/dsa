#include<bits/stdc++.h>
using namespace std;
void movenum(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        {
            if(i!=j)
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main(){
    int arr[] ={-5,-4,7,-7,1,2,-8,-78,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    movenum(arr ,n);
    printarr(arr ,n);
    return 0;
}
