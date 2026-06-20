#include<iostream>
using namespace std;
int main(){

    //matrix 1
    int m1row;
    int m1col;
    cout<<"Enter the number of rows of matrix 1 :";
    cin>>m1row;
    cout<<"Enter the number of columns of matrix 1 :";
    cin>>m1col;
    int matrix1[m1row][m1col];

    cout<<"Enter the matrix 1 elements :"<<endl;
    for(int i=0; i<m1row; i++){
        for(int j=0; j<m1col; j++){
            cin>>matrix1[i][j];
        }
    }

    //matrix 2
    int m2row;
    int m2col;
    cout<<"Enter the number of rows of matrix 2 :";
    cin>>m2row;
    cout<<"Enter the number of columns of matrix 2 :";
    cin>>m2col;
    int matrix2[m2row][m2col];
    cout<<"Enter the matrix 2 elements :"<<endl;
    for(int i=0; i<m2row; i++){
        for(int j=0; j<m2col; j++){
            cin>>matrix2[i][j];
        }
    }

    if(m1col != m2row){
    cout<<"Matrix multiplication not possible";
    return 0;
}
    
    //multiplication of matrix1 and matrix2 
    int matrix3[m1row][m2col];
    for(int i=0; i<m1row; i++){
        for(int j=0; j<m2col; j++){
            matrix3[i][j]=0;
            for(int k=0; k<m1col; k++){
                matrix3[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    //output
    for(int i=0; i< m1row; i++){
        for(int j =0; j<m2col; j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}