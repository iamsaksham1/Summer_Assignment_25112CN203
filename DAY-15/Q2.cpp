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

    int first = arr[0];

    for(int i = 0; i < l - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[l - 1] = first;

    cout << "Array after left rotation :" << endl;
    for(int i = 0; i < l; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}