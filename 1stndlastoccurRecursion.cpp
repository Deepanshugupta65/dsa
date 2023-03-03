
#include<iostream>
using namespace std;

int fastocc(int arr[] ,int s,int e,int key){
    int mid = s + (e-s)/2;
    int ans =-1;
    // base case
    if(s>e)
    return 0;
    if(arr[mid]==key && arr[mid]>arr[mid-1])
    {
    ans = mid;
    return ans;
    }
    else if(key>arr[mid])
    {
    return fastocc(arr , mid+1,e,key);
    }
    else
    {
    return fastocc(arr, s,mid-1,key);

    }
}
int lastocc(int arr[] ,int s,int e,int key){
    int mid = s + (e-s)/2;
    int ans =-1;
      if(s>e)
    return 0;
    if(arr[mid]==key && arr[mid] < arr[mid+1])
    {
    ans = mid;
    return ans;
    }
    else if(key>=arr[mid])
    {
    return lastocc(arr , mid+1,e,key);
    }
    else
    {
    return lastocc(arr, s,mid-1,key);

    }
}
int main(){
    int arr[5]={2,2,2,2,5};
    int size = 5;
    int key = 3;
    cout<<"first"<<fastocc(arr , 0,5,2)<<endl;
    cout<<"last"<<lastocc(arr , 0,5,2)<<endl;
    return 0;
} 
