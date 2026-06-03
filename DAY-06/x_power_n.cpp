#include <iostream>
using namespace std;

int main() {
    double x, result = 1;
    int n;

    cout << "Enter the number: ";
    cin >> x;
    cout << "Enter the power: ";
    cin >> n;
    int power = n;
    if (n < 0)
        power = -n;

    for (int i = 1; i <= power; i++) {
        result *= x;
    }
    if (n < 0)
        result = 1 / result;

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}