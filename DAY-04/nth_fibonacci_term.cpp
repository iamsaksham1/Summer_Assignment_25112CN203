#include <iostream>
int main(){
    using namespace std;
    int n; 
    cout<<" Enter the number :";
    cin>>n;
    if( n==0 ){
        cout<<" 0 ";
    }
    int x = 0;
    int y = 1;
    for(int i=2 ; i<=n ; i++){
        int z = x + y ;
        x = y;
        y = z;
    }
    cout<<" The Nth fibonacci term is :"<<y;
    return 0 ;
}