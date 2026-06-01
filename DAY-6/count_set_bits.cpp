#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter the number :";
    cin>>n;
    int count=0;
    while( n!=0){
        if( n%2==1){
            count++;
        }
        n/=2;
    }
    cout<<" counted set of bits in the given number :"<<count<<endl;
    return 0;
}