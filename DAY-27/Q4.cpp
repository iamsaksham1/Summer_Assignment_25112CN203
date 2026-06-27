#include <iostream>
#include <string>
using namespace std;

void calculateResult(int total, float &percentage, string &grade, string &result)
{
    percentage = (total * 100.0) / 500;

    if (percentage >= 90)
        grade = "A+";
    else if (percentage >= 80)
        grade = "A";
    else if (percentage >= 70)
        grade = "B";
    else if (percentage >= 60)
        grade = "C";
    else if (percentage >= 50)
        grade = "D";
    else
        grade = "F";

    if (percentage >= 40)
        result = "PASS";
    else
        result = "FAIL";
}

int main()
{
    string name;
    int rollNo;
    int marks[5];
    string subjects[5] = {
        "Mathematics",
        "Physics",
        "Chemistry",
        "English",
        "Computer Science"
    };

    int total = 0;
    float percentage;
    string grade;
    string result;

    cout <<"MARKSHEET GENERATION "<<endl;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "\nEnter Marks (Out of 100)\n";

    for (int i = 0; i < 5; i++)
    {
        cout << subjects[i] << ": ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid Marks! Enter again: ";
            cin >> marks[i];
        }

        total += marks[i];
    }

    calculateResult(total, percentage, grade, result);

    cout<< endl;
    cout << "              MARKSHEET" << endl;
    cout<< endl;

    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    cout << endl;
    cout << "Subject\t\t\tMarks" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << subjects[i] << "\t\t" << marks[i] << endl;
    }

    cout << "------------------------------------------" << endl;
    cout << "Total Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "Result      : " << result << endl;
    cout << "                                            " << endl;

    return 0;
}