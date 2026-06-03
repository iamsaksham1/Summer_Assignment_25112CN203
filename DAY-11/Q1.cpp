#include<iostream>
using namespace std;
int sum_of_two(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int n1, n2;
    cout<<"enter the numbers :";
    cin>>n1>>n2;
    cout<<"the sum is :"<<sum_of_two(n1,n2)<<endl;
    return 0;
}