#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);

    bool palin = true;

    for(int i = 0; i < s.length()/2; i++){
        if(s[i] != s[s.length()-1-i]){
            palin = false;
            break;
        }
    }

if(palin)
    cout<<"Palindrome";
else
    cout<<"Not Palindrome";

    return 0;
}