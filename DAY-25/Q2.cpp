#include<iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s1;
    cout<<"Enter the string 1:"<<endl;
    getline(cin,s1);

    string s2;
    cout<<"Enter the string 2:"<<endl;
    getline(cin,s2);

    vector<char>res;
    for(int i=0; i<s1.length(); i++){
        for(int j=0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                bool found = false;

                for(int k=0; k<res.size(); k++){
                    if(res[k]==s1[i]){
                        found = true;
                        break;
                    }
                }

                if(!found){
                    res.push_back(s1[i]);
                }
            }
        }
    }  
     cout << "Common characters: ";
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}