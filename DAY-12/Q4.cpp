#include <iostream>
using namespace std;
bool perfect_no(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
     if(sum==n){
        return true;
            }
            else{
                return false;
            } 
}
int main(){
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if(perfect_no(num)){
        cout << "Perfect Number";
    }
    else{
        cout << "Not a Perfect Number";
    }

    return 0;
}