#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    // creating freq of each element :
    vector<int>freq(256, 0);
    for(int i =0; i<s.length(); i++){
        freq[s[i]]++;
    }

    for(int i=0; i<s.length(); i++){
        int printed = 1;
    // checking the freqency of elements = 1:

        if(freq[s[i]] == 1){
            cout<<s[i]<<endl;
            break;
        }
    }
    return 0;
}