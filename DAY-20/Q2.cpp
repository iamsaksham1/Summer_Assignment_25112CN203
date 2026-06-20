#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<" Enter rows :";
    cin>>r;
    int c;
    cout<<"enter columns :";
    cin>>c;
    if(r!=c){
        cout<<"Matrix is not symmetric";
        return 0;
    } 
    int m[r][c];
    cout<<"Enter the elements of matrix :"<<endl;
    for(int i=0; i<r; i++){
        for(int j=0 ; j<c; j++){
            cin>>m[i][j];
        }
    }
    
    bool symmetric= true;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(m[i][j] != m[j][i]){
                symmetric=false;
                break;
            }
        }
        if(!symmetric){
            break;
        }
    }

    if(symmetric){
        cout<<"Matrix is symmetric";
    }
    else{
        cout<<"Matrix is not symmetric";
    }
    return 0;
}
