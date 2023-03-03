
#include<iostream>
using namespace std;
int power (int n){
    // base case 
    if(n ==0)
    return 1;
    // recusrive relation
    int smallerpro = power(n -1);
    int bigpro = 2 * smallerpro;
    return bigpro;
}
int main(){
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
}
