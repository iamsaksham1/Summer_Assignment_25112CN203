#include <iostream>
using namespace std;

void check_prime(int num){
    if(num == 0 || num == 1){
        cout << "NOT PRIME" << endl;
        return;
    }
    if(num == 2){
        cout << "SMALLEST PRIME NUMBER" << endl;
        return;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            cout << "NOT PRIME" << endl;
            return;
        }
    }
    cout << "PRIME" << endl;
}

int main(){
    int n;
    cout << "enter the number :";
    cin >> n;
    check_prime(n);
    return 0;
}