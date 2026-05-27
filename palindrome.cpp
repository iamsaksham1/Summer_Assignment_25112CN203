#include <iostream>
int main(){
    using namespace std;
    int n ; int number; int rev=0;
    cout<<"enter the digits to check palindrome or not :";
    cin>>n;
     number=n;
    while(n!=0){
        int digits= n%10;
        rev = rev*10+digits;
        n=n/10;
    }
    if (number==rev){
        cout<<" the entered number is a palindrome"<<endl;
    }
    else{
         cout<<" not a palindrome :"<<endl;}
    return 0;
}