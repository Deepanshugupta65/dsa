#include<bits/stdc++.h>
using namespace std;
int removedup(int nums[],int n) {
        int j =0;
        // int n = nums.size();
        int temp[n];
        for(int i =0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                temp[j] =nums[i];
                j++;
            }
        }
        temp[j] = nums[n-1];
        j++;
        for(int i =0;i<j;i++){
              nums[i] = temp[i];
        }
        return j;
    }
int main(){
   int nums[]= {1,1,2,3,3,3,4,5,9,10,10};
    int n = sizeof(nums)/sizeof(nums[0]);
    int s =removedup(nums ,n);
    // cout<<s;
    for(int i =0;i<s;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}