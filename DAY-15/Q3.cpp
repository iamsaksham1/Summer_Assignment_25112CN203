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

    int last = arr[l-1];

   for(int i = l - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    cout << "Array after right rotation :" << endl;
    for(int i = 0; i < l; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}