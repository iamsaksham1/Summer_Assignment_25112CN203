#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the lower range :";
    cin>>a;
    cout<<"enter the upper range :";
    cin>>b;
    for ( int no = a ; no<= b; no++){
        int old= no;
        int temp = no;
        int digits = 0;
        int sum = 0;
        
            while( temp>0){
                digits++;
                temp = temp/10;
            }
            temp = no;
            while(temp>0){
               int digit = temp % 10;
               sum = sum + pow(digit, digits);
                temp = temp/10;
            }
            if(sum == old){
                cout<<old<<" ";
            }
        }
    return 0;
}