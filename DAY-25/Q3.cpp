#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of names you want to sort:"<<endl;
    cin>>n;
    string names[100];
    cout<<"Enter the names :"<<endl;
    for(int i=0; i<n; i++){
        cin>>names[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(names[j]>names[j+1]){
                string temp = names[j+1];
                names[j+1] = names[j];
                names[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
{
    cout << names[i] << " ";
}
    return 0;
}