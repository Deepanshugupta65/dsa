#include<iostream>
#include<climits>
using namespace std;
int main(){
      int arr[3][3] ;
      int maxi = INT_MIN;
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++)
        cin>>arr[i][j];
    }
     for(int i =0;i<3;i++){
        int sum =0;
        for(int j =0;j<3;j++){
        sum = sum +arr[i][j];
        }
        if(sum>maxi){
            maxi= sum;
        }
        
    }
        cout<<maxi<<endl;  
    return 0;
}
