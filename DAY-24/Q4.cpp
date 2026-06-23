#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :"<<endl;
    getline(cin,s);
    string ans="";
    
    for(int i=0; i<s.length(); i++){
        bool found = false;
        for(int j=0; j < ans.length(); j++){
            if(s[i]==ans[j]){
                found = true;
                break;
            }
        }

        if(!found){
            ans+=s[i];
        }
    }
    cout<<ans;
    return 0;
}    