#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the number of rows of matrix 1 :";
    cin>>row;
    cout<<"Enter the number of columns of matrix 1 :";
    cin>>col;
    int matrix1[row][col];
    cout<<"Enter the matrix 1 elements :"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix1[i][j];
        }
    }

    // transpose 
    int trow=col;
    int tcol=row;
    int tmatrix[trow][tcol];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        tmatrix[j][i] = matrix1[i][j];
        }
    }

    cout<<" Transpose of entered matrix is :"<<endl;
    for(int i =0; i<trow; i++){
        for(int j=0; j<tcol; j++ ){
            cout<<tmatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}