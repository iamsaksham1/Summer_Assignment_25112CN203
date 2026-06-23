#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    getline(cin,s);
    string word = "";
    string longest = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            word+=s[i];
        }
        else{
            if(word.length() > longest.length()){
                longest=word;
            }
            word ='"';
        }
    }
      // Check the last word
    if(word.length() > longest.length()) {
        longest = word;
    }

    cout << "Longest Word: " << longest << endl;
    return 0;
}