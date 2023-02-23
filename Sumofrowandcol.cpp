#include<iostream>
using namespace std;
int main(){
    
    int arr[3][3] ;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        cin>>arr[i][j];
    }
    // row wise  addition
    
     for(int i =0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++)
        sum = sum +arr[i][j];
       cout<<sum<<" "<<endl;
         
    }
    // col wise addition
    cout<<"lets print columns wise indexig"<<" ";
    for(int j =0;j<3;j++){
        int sum =0;
        for(int i =0;i<3;i++){
            sum = sum +arr[i][j];
        }
            cout<<sum<<" ";
        }
        cout<<endl;
    return 0;
}
