#include<iostream>
#include <cmath>
using namespace std;
int binary_to_decimal (long long binary_digits){
    int decimal = 0;
    int position = 0;
    while ( binary_digits !=0){
        int last_digits = binary_digits % 10;
        decimal = decimal + last_digits * pow( 2,position);
        binary_digits/=10;
        position ++;
    }
    return decimal ;
}
int main(){
    long long n;
    cout<<" enter the  binary digits :";
    cin>>n;

    cout<<"Decimal Digits are :"<<binary_to_decimal(n)<<endl;
    return 0;

}