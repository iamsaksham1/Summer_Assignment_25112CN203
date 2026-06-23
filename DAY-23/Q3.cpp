#include<iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter the string 1 :"<<endl;
    getline(cin,s1);
    string s2;
    cout<<"Enter the string 2 :"<<endl;
    getline(cin,s2);

    // comparing length :
    if(s1.length() != s2.length()){
        cout<<"Not Anagram";
        return 0;
    }
    vector<int> freq1(256, 0);
    for(int i=0; i<s1.length(); i++){
        freq1[s1[i]]++;
    }
    vector<int> freq2(256, 0);
    for(int i=0; i<s2.length(); i++){
        freq2[s2[i]]++;
    }
    // main logic - comparing freq of both strings :
    bool anagram =true;
    for(int i = 0; i < 256; i++){
        if(freq1[i] != freq2[i]){
            anagram = false;
            break;
        }
    }
     if(anagram){
        cout<<"Anagram strings";
    }
    else{
        cout<<"Not Anagram strings";
    }

    return 0;
}