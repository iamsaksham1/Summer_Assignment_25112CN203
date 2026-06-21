#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);

    int freq[256] = {0};

    // Count frequency
    for(int i = 0; i < s.length(); i++){
        freq[s[i]]++;
    }

    // Print each character only once
    for(int i = 0; i < s.length(); i++){

        bool alreadyPrinted = false;

        for(int j = 0; j < i; j++){
            if(s[i] == s[j]){
                alreadyPrinted = true;
                break;
            }
        }

        if(!alreadyPrinted){
            cout<<s[i]<<" : "<<freq[s[i]]<<endl;
        }
    }

    return 0;
}