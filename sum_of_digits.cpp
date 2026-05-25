#include<iostream>
int main(){
    using namespace std;
    int n; int sum=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"the sum of digits is :"<<sum<<endl;
    return 0;
}