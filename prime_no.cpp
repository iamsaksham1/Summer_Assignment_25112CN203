#include <iostream>
int main(){
    using namespace std;
    int n ; 
    cout<<"enter the number :";
    cin>>n;
    int count =0 ;
    for (int i =1;i <=n ; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count==2){
        cout<<"The number is prime "<<endl;
    }
    else{
        cout<<"the number is not prime"<<endl;
    }
    return 0;
}