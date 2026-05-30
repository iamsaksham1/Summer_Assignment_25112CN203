#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int digits;
    int sum=0;
    int old=n;
    while(n>0){
        digits=n%10;

        int fact=1;
        for(int i =1; i<=digits ;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;

    }
    if(sum == old)
        cout << "Strong Number";
    else
        cout << "Not a Strong Number";
        return 0;

}
