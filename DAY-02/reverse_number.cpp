#include<iostream>
int main(){
    using namespace std;
    int n ; int rev=0;
    cout<<"enter the digits :";
    cin>>n;
    while(n!=0){
        int digits= n%10;
        rev= rev*10+digits;
        n=n/10;
    }
    cout<<"the reversed digits are :"<<rev<<endl;
    return 0;
}