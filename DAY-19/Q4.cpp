#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"Enter the number of rows of matrix  :";
    cin>>row;
    cout<<"Enter the number of columns of matrix  :";
    cin>>col;
    int matrix[row][col];
    cout<<"Enter the matrix 1 elements :"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }

    if(row==col){
        int psum=0;
        for(int i =0; i<row; i++){
            psum = psum + matrix[i][i];
        }
        cout<<" The sum of primary diagonal is :"<<psum<<endl;

        int ssum=0;
        for(int i=0; i<row; i++){
            ssum= ssum + matrix[i][col-1-i];
        }
        cout << "Secondary diagonal sum = " << ssum<<endl;
    }
    else 
    cout<<" Can't find diagonal sum :"<<endl;
return 0;
}