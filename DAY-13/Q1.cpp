#include <iostream>
using namespace std;
int main() {
    int l;
    cout << "Enter the size of array: ";
    cin >> l;
    int arr[l];
    cout << "Enter the elements:\n";
    for(int i = 0; i < l; i++) {
        cin >> arr[i];
    }
    cout << "Array elements are:\n";
    for(int i = 0; i < l; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}