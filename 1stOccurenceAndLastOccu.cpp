#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int key){
      int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,3,4};
    cout<<"index of 3 "<<firstocc(arr , 5, 3)<<endl;
    return 0;
}

