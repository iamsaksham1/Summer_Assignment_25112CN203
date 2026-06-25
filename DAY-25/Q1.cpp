#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array 1: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of array 1 in sorted order:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of array 2: ";
    cin >> m;

    int arr2[m];
    cout << "Enter the elements of array 2 in sorted order:\n";
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    int res[n + m];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n && j < m) {

        if(arr1[i] < arr2[j]) {
            res[k] = arr1[i];
            i++;
        }
        else {
            res[k] = arr2[j];
            j++;
        }

        k++;
    }

    while(i < n) {
        res[k] = arr1[i];
        i++;
        k++;
    }

    while(j < m) {
        res[k] = arr2[j];
        j++;
        k++;
    }

    cout << "Merged Array: ";

    for(int i = 0; i < n + m; i++) {
        cout << res[i] << " ";
    }

    return 0;
}