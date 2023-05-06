#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    for(int i =1;i<n;i++){
    if(n%i==0)
    int sum = i+sum;
    }
    if(sum == n){
     cout<<"falna dhimkana";
    }
    else {
    cout<<"false";
    }
    return 0;
}
