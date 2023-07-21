#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,1,5,9,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i =1;i<n;i++){
    if(largest<arr[i]){
        largest = arr[i];
    }
 }
 int seclargest = -1;
 for(int i =0;i<n;i++){
    if(seclargest<arr[i] && arr[i]!= largest){
        seclargest = arr[i];
    }
 }
 cout<<"2nd largest element"<<seclargest<<endl;
}