#include<bits/stdc++.h>
using namespace std;
void getreverse(char name[] , int n){
       int s =0,e=n-1;
       while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
       }
}
int getlen(char name[]){
    int count =0;
    for(int i =0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    int num = getlen(name);
    cout<<"size of name  "<<num<<endl;
    getreverse(name , num);
    cout<<name<<endl;
    return 0;
    
}
