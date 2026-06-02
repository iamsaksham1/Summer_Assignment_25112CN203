#include<iostream>
using namespace std;
long long sum_of_digits( int n){
    int sum=0;
    while( n!=0 ){
        int sum = sum + (n % 10);
        n/=10;
    }
    return 0;
}
int main(){
    int x;
    cout<<" enter the number :"<<endl;
    cin>>x;
    cout<<" the sum of digits of "<<x<<" is "<<sum_of_digits(x)<<endl;
    return 0;

}