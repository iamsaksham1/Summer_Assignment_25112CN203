#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "===== Voting Eligibility System =====\n";
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age!" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}