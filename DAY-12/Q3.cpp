#include<iostream>
using namespace std;
void fibonacci(int n){
    int first = 0;
    int second = 1; int next;
    for(int i =1;i<=n; i++){
         next = first + second;
         cout<<first<<" ";
        first=second;
        second = next;
    }
}
int main(){
    int num;
    cout<<" enter the number :";
    cin>>num;
    cout<<" the fibonacci till "<<num<<" is ";
    fibonacci(num);
    return 0;
}