#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string :";
    getline(cin,s);
    int size = 0;
    for(int i=0; s[i]!='\0'; i++){
        size++;
    }
    cout<<"The length of the string is :"<<size<<endl;
    return 0;
}