#include<iostream>
int main(){
    using namespace std;
    int a,b,LCM;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    int num = (a>b)?a : b;
    while (true){
        if(num%a==0 && num%b==0){
            LCM = num ;
            break;
        }
        num++;
    }
    cout<<" The LCM of given numbers is :"<<LCM<<endl;
    return 0;
}