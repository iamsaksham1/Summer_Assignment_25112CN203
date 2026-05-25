#include<iostream>
int main(){
    using namespace std;
    int n; int fact=1;
    cout<<"enter the number :";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        fact=i*fact;
    }
    cout<<"the factorial of "<<n<<" is :"<<fact;
    return 0;
}
