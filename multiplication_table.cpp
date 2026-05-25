#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<" Enter the number :";
    cin>>n;
    for(int i=1; i<=10 ; i++){
       cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
