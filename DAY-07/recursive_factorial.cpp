#include <iostream>
using namespace std;
long long factorial( int n){
    if( n<=1){
        return 1;
    }
    return  n * factorial(n-1);
}
int main(){
    int x;
    cout<<" Enter the number :"<<endl;
    cin>>x;
    if(x < 0){
        cout << "Factorial is not defined for negative numbers.";
        return 0;
    }
    cout<<" the factorial of "<<x<<" is "<<factorial(x)<<endl;
    return 0;
}