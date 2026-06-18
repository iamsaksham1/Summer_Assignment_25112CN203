#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Optimized Bubble Sort (Descending)
    for(int i = n - 1; i >= 1; i--) {
        bool swapped = false;

        for(int j = 0; j < i; j++) {
            if(arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(!swapped) {
            break;
        }
    }

    cout << "Sorted array in descending order:"<<endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}