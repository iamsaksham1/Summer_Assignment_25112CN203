#include<iostream>
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

    bool found = false;

    for (int i = 0; i < l; i++) {
        if (arr[i] == key) {
            cout << key << " is present at :"<<i << endl;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << key << " is not present " << endl;
    }
    return 0;
}