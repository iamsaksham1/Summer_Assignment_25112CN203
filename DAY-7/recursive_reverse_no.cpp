#include<iostream>
using namespace std;
int rev = 0;
long long reverse_no( int n){
    if( n==0 ){
        return rev;
    }
    rev = rev * 10 + (n%10);
    return reverse_no(n/10);
}
int main(){
    int x;
    cout<<" enter the number :";
    cin>>x;
    cout<<" the reversed digits of :"<<x<<" are "<<reverse_no(x)<<endl;
    return 0;
}