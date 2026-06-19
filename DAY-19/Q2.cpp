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
    int matrix2[row][col];
    int matrix3[row][col];
    cout<<"Enter the matrix 1 elements :"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter the matrix 2 elements :"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix2[i][j];
        }
    }

    cout<<"The Subtraction of Matrix 1 and Matrix 2 is :"<<endl;
    for(int i=0;i<row; i++){
        for(int j=0; j<col; j++){
            matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
    
    cout << "Resultant Matrix :" << endl;
    for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        cout << matrix3[i][j] << " ";
    }
    cout << endl;
    }
        
    return 0;
}