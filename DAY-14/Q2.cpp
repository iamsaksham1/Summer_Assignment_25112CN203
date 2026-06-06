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
        cin>>arr[i];
    }
    int key;
    cout << "Enter the key to search : ";
    cin >> key;
    int freq = 0;
    for(int i=0; i<l; i++){
        if(arr[i]==key){
            freq++;
        }
    }
    cout<<" The frequency of the "<<key<<" is :"<<freq<<endl;
    return 0;
}