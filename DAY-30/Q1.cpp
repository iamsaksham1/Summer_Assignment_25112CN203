#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

string name[MAX];
string course[MAX];
string branch[MAX];
string gender[MAX];
string email[MAX];

int rollNo[MAX];
int age[MAX];
int admissionNo[MAX];

float marks[MAX];
float totalMarks[MAX];
float percentage[MAX];
string grade[MAX];

int totalStudents = 0;

void calculateGrade(int index)
{
    percentage[index] = (marks[index] * 100.0) / totalMarks[index];

    if (percentage[index] >= 90)
        grade[index] = "A+";
    else if (percentage[index] >= 80)
        grade[index] = "A";
    else if (percentage[index] >= 70)
        grade[index] = "B";
    else if (percentage[index] >= 60)
        grade[index] = "C";
    else if (percentage[index] >= 50)
        grade[index] = "D";
    else
        grade[index] = "FAIL";
}

void addStudent()
{
    cin.ignore(); // removes the leftover newline 

    cout << "\nEnter Student Name: ";
    getline(cin, name[totalStudents]);

    cout << "Enter Roll Number: ";
    cin >> rollNo[totalStudents];

    cin.ignore();
    cout << "Enter Course: ";
    getline(cin, course[totalStudents]);

    cout << "Enter Branch: ";
    getline(cin, branch[totalStudents]);

    cout << "Enter Age: ";
    cin >> age[totalStudents];

    cout << "Enter Admission Number: ";
    cin >> admissionNo[totalStudents];

    cin.ignore();
    cout << "Enter Gender: ";
    getline(cin, gender[totalStudents]);

    cout << "Enter Email: ";
    getline(cin, email[totalStudents]);

    cout << "Enter Obtained Marks: ";
    cin >> marks[totalStudents];

    cout << "Enter Total Marks: ";
    cin >> totalMarks[totalStudents];

    calculateGrade(totalStudents);

    totalStudents++;

    cout << "\nStudent Added Successfully!\n";
}

void displayStudents()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Students Found.\n";
        return;
    }

    cout << "\n========== STUDENT RECORDS ==========\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name           : " << name[i] << endl;
        cout << "Roll Number    : " << rollNo[i] << endl;
        cout << "Course         : " << course[i] << endl;
        cout << "Branch         : " << branch[i] << endl;
        cout << "Age            : " << age[i] << endl;
        cout << "Admission No   : " << admissionNo[i] << endl;
        cout << "Gender         : " << gender[i] << endl;
        cout << "Email          : " << email[i] << endl;
        cout << "Percentage     : " << percentage[i] << "%" << endl;
        cout << "Grade          : " << grade[i] << endl;

        cout << "                                     \n";
    }
}

void searchStudent()
{
    int roll;
    bool found = false;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < totalStudents; i++)
    {
        if (rollNo[i] == roll)
        {
            found = true;

            cout << "\nStudent Found\n";
            cout << "Name        : " << name[i] << endl;
            cout << "Course      : " << course[i] << endl;
            cout << "Branch      : " << branch[i] << endl;
            cout << "Percentage  : " << percentage[i] << "%" << endl;
            cout << "Grade       : " << grade[i] << endl;
        }
    }

    if (!found)
        cout << "\nStudent Not Found.\n";
}

void displayTopper()
{
    if (totalStudents == 0)
    {
        cout << "\nNo Students Found.\n";
        return;
    }

    int topper = 0;

    for (int i = 1; i < totalStudents; i++)
    {
        if (percentage[i] > percentage[topper])
            topper = i;
    }

    cout << "\n                CLASS TOPPER                    \n";
    cout << "Name        : " << name[topper] << endl;
    cout << "Roll Number : " << rollNo[topper] << endl;
    cout << "Percentage  : " << percentage[topper] << "%" << endl;
    cout << "Grade       : " << grade[topper] << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n                                      \n";
        cout << "      STUDENT MANAGEMENT SYSTEM         \n";
        cout << "\n                                      \n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Display Topper\n";
        cout << "5. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            displayTopper();
            break;

        case 5:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}