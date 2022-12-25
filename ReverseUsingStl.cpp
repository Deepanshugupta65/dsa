#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    reverse(arr,arr+n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return;
}
int main(){
    int arr[] = {5,4,89,45,21,47};
    int n = sizeof(arr)/sizeof(arr[0]);
    printarray(arr , n);
    return 0;
}
