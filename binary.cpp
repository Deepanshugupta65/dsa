#include<iostream>
using namespace std;
int binary(int arr[], int size , int key){
    int u=0;
    int l=size -1;
    int mid = u+(l-u)/2;
    while(u<=l){
        if(arr[mid]==key){
            return mid;
        }
         if(arr[mid]<key){
            u=mid +1;
        }
        else{
            l=mid -1;;
        }
        mid = u+(l-u)/2;
    }
    return -1;
}
int main(){
    int arr[5]={2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index =  binary(arr , n, 10);
    cout<<"index of 10 "<<index<<endl;
    return 0;
}


