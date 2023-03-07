
#include<iostream>
using namespace std;

void reverse(string &str, int i,int j){
    cout<<" call recive "<< str<<endl;
    cout<<"length of i&j "<<i <<j<<endl;
    // base case 
    if(i>j) 
    return;
    swap(str[i],str[j]);
    i++;
    j--;
    // recursive call
    reverse(str,i,j);
}
int main(){
    string name = "abcde";
    cout<<endl;
    reverse(name , 0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}


// optimize of string
/*
#include<iostream>
using namespace std;

void reverse(string &str, int i=0){
    if(i==str.size()/2) return;
   swap(str[i],str[str.size()-i-1]);
   reverse(str,++i);
}
int main(){
    string name = "abcde";
    cout<<endl;
    reverse(name);
    cout<<endl;
    cout<<name<<endl;
    return 0;
}*/
