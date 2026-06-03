#include <iostream>
using namespace std;
int main(){
   int n;
   int digits, sum=0, old;
    cout<<" enter the number :";
    cin>>n;
    old = n;
    while(n>0){
        digits = n%10;
        sum = sum + (digits*digits*digits);
        n=n/10;
    }
    if ( sum == old){
        cout<<" it is an armstrong number"<<endl;
    }
    else {
        cout<<" it is not an armstrong number"<<endl;}
        return 0;

}