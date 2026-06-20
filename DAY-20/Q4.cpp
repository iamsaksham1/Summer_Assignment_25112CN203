#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<" Enter rows :";
    cin>>r;
    int c;
    cout<<" Enter columns :";
    cin>>c;
    // input
    int m[r][c];
    cout<<" Enter the elements of matrix :"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0 ; j<c; j++){
            cin>>m[i][j];
        }
    }
    for(int j=0; j<c; j++){
    int sum = 0;
    for(int i=0; i<r; i++){
        sum += m[i][j];
    }
    cout<<"Column "<<j+1<<" Sum = "<<sum<<endl;
    }
    return 0;
}