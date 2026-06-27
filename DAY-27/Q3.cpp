#include <iostream>
using namespace std;

float basicSalary;
float bonus;
float tax;
float netSalary;

void calculateSalary()
{
    netSalary = basicSalary + bonus - tax;
}

void salaryManagement()
{
    cout << "\n SALARY MANAGEMENT \n";

    cout << "Enter Basic Salary : ";
    cin >> basicSalary;

    cout << "Enter Bonus : ";
    cin >> bonus;

    cout << "Enter Tax : ";
    cin >> tax;

    calculateSalary();

    cout << "\n SALARY DETAILS \n";
    cout << "Basic Salary : " << basicSalary << endl;
    cout << "Bonus        : " << bonus << endl;
    cout << "Tax          : " << tax << endl;
    cout << "Net Salary   : " << netSalary << endl;
}

int main()
{
    salaryManagement();

    return 0;
}