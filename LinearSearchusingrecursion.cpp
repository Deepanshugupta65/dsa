#include<iostream>
using namespace std;

bool linearsearch(int arr[] , int size , int key){
    if(size == 0)
    return false;
    if(arr[0] == key){
    return true;
    }
    else {
    bool remain  = linearsearch(arr+1 , size-1,key);
    return remain;
    }
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int key = 4;
    int ans = linearsearch(arr , size , key);
    if(ans){
        cout<<"i found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}
