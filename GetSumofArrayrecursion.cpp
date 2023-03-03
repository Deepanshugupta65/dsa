#include<iostream>
using namespace std;
void print(int arr[] ,int n){

    cout<<n<<" ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}
int getsum(int arr[] , int n){
    print(arr , n);
    // base case
    if(n ==0)
    return 0;
    if( n ==  1)
    return arr[0];
    int total = getsum(arr +1 , n -1);
    int sum = total + arr[0];
    return sum;
}
int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    int ans = getsum(arr , size);
    cout<<"sum is "<<ans<<endl;
}
