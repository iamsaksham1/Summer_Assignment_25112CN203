#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"enter the number :";
    cin>>n;
    for( int i =1; i<n ; i++){
       if(n % i == 0){
        sum = sum + i;
    }
        }
       if(sum == n) {
        cout << "It is a Perfect Number";
    }
    else {
        cout << "It is not a Perfect Number";
    }
         return 0;
    }
   
