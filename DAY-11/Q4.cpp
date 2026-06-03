#include<iostream>
using namespace std;
int factorial_of(int num){
    int fact=1;
    for(int i=1; i<=num; i++ ){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n < 0){
        cout << "Factorial not defined for negative numbers" << endl;
    } else {
        cout << "Factorial is: " << factorial_of(n) << endl;
    }
    return 0;
}