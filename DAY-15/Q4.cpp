#include <iostream>
using namespace std;

int main() {
    int l;

    cout << "Enter the size of array : ";
    cin >> l;

    int arr[l];

    cout << "Enter the elements of array :" << endl;
    for(int i = 0; i < l; i++) {
        cin >> arr[i];
    }
    vector <int> temp;
    for(int i=0; i<l; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int non_zero= temp.size();
    for(int i=0; i<non_zero; i++ ){
        arr[i]=temp[i];
    }
    for(int i =non_zero; i<n; i++){
        arr[i]=0;
    }

    return 0;
}