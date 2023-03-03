
#include<iostream>
using namespace std;
void print(int arr[] ,int s , int e){
    for(int i =s;i<=e;i++){
        cout<<arr[i]<<" ";
        }cout<<endl;
}
bool binarysearch(int arr[] , int s , int e ,int key){

    print(arr,s,e);
    //  base case;
    if(s>e)  
    return false;

    int mid = s +(e-s)/2;

    if(arr[mid] == key)
    return true;

    else if(arr[mid]<key)
    {
   return binarysearch(arr,mid+1,e,key);
     }
    else{
     return binarysearch(arr,s, mid-1,key);
     }
}

int main(){
    int arr[9] = {2,3,4,5,6,7,8,9,10};
    int size = 9;
    int key = 5;
    cout<<"present "<<binarysearch(arr , 0 , 9, 5)<<endl;

    return 0;
}
