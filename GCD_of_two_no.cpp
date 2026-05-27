#include <iostream>
int main(){
    using namespace std;
    int a , b , GCD;
    cout<<"enter the first number :";
    cin>>a;
    cout<<"enter the second number :";
    cin>>b;
    for(int i=1; i<=a && i<=b ; i++){
        if(a%i == 0 && b%i == 0){
            GCD = i;
        }
    }
    cout<<"The GCD of these numbers is :"<<GCD<<endl;
    return 0;
}