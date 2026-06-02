#include<iostream>
using namespace std;
long long sum_of_digits( int n){
   if ( n==0){
    return 0;
   }
   return (n%10) + sum_of_digits(n/10);
}
int main(){
    int x;
    cout<<" enter the number :"<<endl;
    cin>>x;
    cout<<" the sum of digits of "<<x<<" is "<<sum_of_digits(x)<<endl;
    return 0;

}