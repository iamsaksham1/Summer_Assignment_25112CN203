#include <iostream>
int main(){
    using namespace std;
    int a,b;
    cout<<"Enter the lower limit of the range :";
    cin>>a;
    cout<<"Enter the upper limit of the range :";
    cin>>b;
    for( int i=a ; i<=b ; i++){
        bool isprime = true;
        if( i <=1){
            isprime = false;
        }
        for(int j =2; j*j <= i ;j++){
            if(i%j ==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout<<i<<endl;
        }
    }
    return 0;
}