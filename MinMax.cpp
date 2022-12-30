#include<bits/stdc++.h>
#include<iostream>
void minmax(int arr[],int n){
    int max = arr[0];
    int min =arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max =arr[i];
        if(min>arr[i])
        min =arr[i];
    }
    std::cout<<"maximum :" <<max<<" ";
    std::cout<<"minimum :"<<min;
}
int main(){
    int arr[]={12,25,48,98,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    minmax(arr , n);
}
