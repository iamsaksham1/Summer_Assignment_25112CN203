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
    vector<int>result;
    int i=0, j=0;
    while(i < n && j < m){
        while (i+1<n && a1[i+1]==a1[i]){
            i++;
        }
        while (j+1<m && a2[j+1]==a2[j]){
            j++;
        }
        if(a1[i]<a2[j]){
            result.push_back(a1[i]);
            i++;
        }
        else if(a2[j]<a1[i]){
            result.push_back(a2[j]);
            j++;
        }
        else{
        result.push_back(a1[i]);
        i++;
        j++;}
    }

        while(i<n){
            while(i+1<n && a1[i+1]==a1[i]){
            i++;
            }
            result.push_back(a1[i]);
            i++;
        }
        while(j<m){
            while(j+1<n && a2[j+1]==a2[j]){
            j++;
            }
            result.push_back(a2[j]);
            j++;
        }
        
    
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
