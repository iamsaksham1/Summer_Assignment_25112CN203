#include <iostream>
int main(){
    using namespace std;
    int n;int product = 1;
    cout<<"Enter the digits :";
    cin>>n;
    while(n!=0){
        product = product*(n%10);
        n=n/10;
    }
    cout<<" the product of digits is :"<<product<<endl;
    return 0;
}
