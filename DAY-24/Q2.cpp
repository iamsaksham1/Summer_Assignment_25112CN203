#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    getline(cin,s);
    int count=1;
    string ans = "";
    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            ans += s[i - 1];          // add character
            ans += to_string(count);  // add count
            count = 1;
        }
    }
     // Add the last character group
    ans += s[s.length() - 1];
    ans += to_string(count);

    cout << "Compressed String: " << ans << endl;
    return 0;
}