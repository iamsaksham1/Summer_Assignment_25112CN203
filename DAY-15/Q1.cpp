#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the size of array : ";
    cin>>l;
    int arr[l];

    //input
    cout<<" Enter the elements of array :"<<endl;
    for(int i=0; i<l; i++){
        cin>>arr[i];}

        cout<<"reversed array is :"<<endl;
        for(int i=l-1; i>=0; i--){
            cout<<arr[i]<<" ";
        }
        return 0;
    }