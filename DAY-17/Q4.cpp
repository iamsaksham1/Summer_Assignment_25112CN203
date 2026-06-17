#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array 1 :"<<endl;
    cin>>n;
    int a1[n];
    cout<<"enter the elements of array 1 :"<<endl;
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

    vector<int>common;
    int i=0,j=0;
    while(i<n && i<m){
        if(a1[i]<a2[j]){
            i++;        }
        else if(a1[i]>a2[j]){
            j++;
        }
        else {
            common.push_back(a1[i]);
        i++;
        j++;
    }
        
    }
    cout << "common : ";

    for(int k = 0; k < common.size(); k++)
    {
        cout << common[k] << " ";
    }
    return 0;}