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

    int j = 0;

    for(int i = 0; i < l; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    while(j < l) {
        arr[j] = 0;
        j++;
    }

    cout << "After zeroes moved to last :" << endl;
    for(int i = 0; i < l; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}