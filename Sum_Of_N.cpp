#include <iostream>
int main(){
    using namespace std;
    int n, sum = 0 ;
    cout<< "Enter the value of n :" ;
    cin>> n;
    for(int i= 0; i<=n ;i++){
        sum = sum + i ;
    }
    cout<<"sum of first "<<n<<" numbers is "<<sum<<endl;
    return 0;
}