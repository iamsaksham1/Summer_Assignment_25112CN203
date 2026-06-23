#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    getline(cin,s);
    vector<int>freq(256);
    for(int i=0; i<s.length(); i++){
        freq[s[i]]++;
    }
    int maxfreq = 0;
    char maxchar;
    for(int i=0; i<s.length(); i++){
        if(freq[s[i]]>maxfreq){
            maxfreq = freq[s[i]];
            maxchar = s[i];
        }
    }
    cout<<"Maximum occurring character : "<<maxchar<<endl;
    cout<<"Frequency : "<<maxfreq<<endl;

    return 0;
}