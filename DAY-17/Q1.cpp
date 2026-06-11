#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array 1 :"<<endl;
    cin>>n;
    int a1[n];
    cout<<"enter the elements of array1 :"<<endl;
    for(int i=0; i<n; i++){
        cin>>a1[i];
    }
    int m;
    cout<< "enter the size of array 2 :"<<endl;
    cin>>m;
    int a2[m];
    cout<<"enter the elements of array2 :"<<endl;
    for(int i=0; i<m; i++){
        cin>>a2[i];
    }

    int a3[n+m];
    for(int j=0; j<n; j++){
        a3[j]=a1[j];
    }
    for(int j=n; j<m+n; j++){
         a3[j]=a2[j-n];
    }
    for(int k=0; k<n+m; k++){
        cout<<a3[k]<<" ";
    }
    return 0;
}