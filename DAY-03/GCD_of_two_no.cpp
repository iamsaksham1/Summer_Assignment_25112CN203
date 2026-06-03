#include <iostream>
int main() {
    using namespace std;
    int a, b;
    cout << "enter the first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;

    // Euclidean algorithm — handles 0 correctly
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    cout << "The GCD of these numbers is :" << x << endl;
    return 0;
}