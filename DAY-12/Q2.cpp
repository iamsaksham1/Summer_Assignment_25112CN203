#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int num){
    if(num<0) return false;

    int digits=0 , temp=num;
    while(temp!=0){
        digits++;
        temp/=10;
    }
    int sum=0;
    temp=num;
    while(temp!=0){
        int digits=temp%10;
        sum+=pow(digits,digits);
        temp/=10;
    }
    return sum==num;

}
int main(){
    int n;
    cout<<" enter the number :";
    cin >> n;
    if(armstrong(n))
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;
    return 0;
}