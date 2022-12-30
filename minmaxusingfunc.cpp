#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v ={10,20,54,1,45,14,78};
    int min=0;
    int max=0;
    min = *min_element(v.begin(),v.end());
    max = *max_element(v.begin(),v.end());
    std::cout<<min<<" ";
    std::cout<<max<<" ";
    return 0;
}
