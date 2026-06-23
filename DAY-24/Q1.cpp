#include <iostream>
using namespace std;
int main(){
    string s1;
    cout<<"Enter the string 1:"<<endl;
    getline(cin, s1);
    string s2;
    cout<<"Enter the string s2:"<<endl;
    getline(cin,s2);

    // checking both strings length :
    if(s1.length()!=s2.length()){
        cout<<"string rotation is not possible"<<endl;
        return 0;
    }
    bool rotate = false;
    for(int i=0; i<s1.length(); i++){
        if(s1==s2){
            rotate = true;
            break;
        }
        char first = s1[0];

        for(int i = 0; i < s1.length()-1; i++){
            s1[i] = s1[i+1];
        }

        s1[s1.length()-1] = first;
    }

    if(rotate){
        cout<<"Strings are rotations";
    }
    else{
        cout<<"Strings are not rotations";
    }
     return 0;
}