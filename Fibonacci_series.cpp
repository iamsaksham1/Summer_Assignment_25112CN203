#include <iostream>
int main(){
    using namespace std;
    int n; 
    cout<<" Enter the number :";
    cin>>n;
    int first=0;
    int second=1;
    int next;
    for(int i =1; i<=n; i++){
        next = first+second;
        cout<<first<<" ";
        first=second;
        second=next;
    }
    return 0;
}