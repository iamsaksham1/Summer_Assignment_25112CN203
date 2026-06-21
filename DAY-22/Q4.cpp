#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    string neww ="";
    for(int i =0; i<s.length(); i++){
        if(s[i]!=' '){
            neww+=s[i];
        }
    }
    cout<<neww<<endl;
return 0;
}