
#include<iostream>
using namespace std;
bool isbool(int arr[] , int n){
    // base case
    if( n ==0 || n == 1)
    return true;
    else if (arr[0]>arr[1])
    return false;
    else
    bool remaining = isbool(arr+1 , n-1);
    return true;
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int ans = isbool(arr , size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else 
    cout<<"not "<<endl;
}
