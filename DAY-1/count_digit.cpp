#include<iostream>
int main(){
    using namespace std;
    int n; int digits=0;
    cout<<" Enter the digits :";
    cin>>n;
    while(n!=0){
        n=n/10;
        digits++;
    }
    cout<< "the number of digits are :"<< digits<<endl;
    return 0;
}
