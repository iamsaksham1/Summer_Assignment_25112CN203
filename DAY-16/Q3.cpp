#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int sum;
    cout<<"enter the sum : ";
    cin>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     bool found = false;
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout<<"the pair with given sum are :"<<arr[i]<<" "<<arr[j]<<endl;
                found = true;
            }
            
        }
    }
    if(found == false) {
        cout << "No pairs found";
    }
    return 0;
}