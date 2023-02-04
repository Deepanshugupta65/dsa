#include<iostream>
using namespace std;
// is string is casesinsitive
char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z')
       return ch;
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }   
}
int checkpallindrom(char name[] , int num){
    int s =0, e= num-1;
    while(s<=e){
        if(tolowercase(name[s])!= tolowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    int pallin = checkpallindrom(name , num);
    cout<<"pallindrom "<<pallin<<endl;
}
