
#include<iostream>
using namespace std;
bool checkpallindrom(string &str,int i,int j){
    // base case
    if(i>j) 
    return true;
    if(str[i] != str[j])
    return false;
    else{
        // recursive call
        return checkpallindrom(str,i+1,j-1);
    }
}
int main(){
    string name ="aabbaa";
    cout<<endl;
    bool ispallindrom = checkpallindrom(name,0,name.length()-1);
    if(ispallindrom){
        cout<<"its is pallindrom"<<endl;
    }
    else{
        cout<<"its not "<<endl;
    }
    return 0;
}
