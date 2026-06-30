#include<iostream>

using namespace std;

const int MAX = 100;

int emp_id[100];
int age[100];
int phone[100];

string name[100];
string gender[100];
string department[100];
string designation [100];
string email[100];

float net_salary[100];
float bonus[100];
float tax[100];
float Experience[100];
float rating[100];
float basic_salary[100];

int totalemployee = 0;

void calculateSalary(int index)
{
    net_salary[index] = basic_salary[index] + bonus[index] - tax[index];
}

void ADD_EMPLOYEE(){

    if(totalemployee == MAX)
    {
        cout << "\nEmployee Limit Reached!\n";
        return;
    }

    cin.ignore(); // removes the leftover newline 
    cout<<"Enter the Employee Name :"<<endl;
    getline(cin, name[totalemployee]);

    cout<<"Enter the Employee ID :"<<endl;
    cin>>emp_id[totalemployee];

    cout<<"Enter the age :"<<endl;
    cin>>age[totalemployee];

    cin.ignore();
    
    cout<<"Enter the Phone number :"<<endl;
    cin>>phone[totalemployee];
    
    cout<<"Enter the Employee gender :"<<endl;
    getline(cin, gender[totalemployee]);

    cout<<"Enter the Department :"<<endl;
    getline(cin, department[totalemployee]);

    cout<<"Enter the Designation of Employee :"<<endl;
    getline(cin, designation[totalemployee]);

    cout<<"Enter the email :"<<endl;
    getline(cin, email[totalemployee]);

    cout << "Enter Basic Salary : ";
    cin >> basic_salary[totalemployee];

    cout<<"Enter the Bonus :"<<endl;
    cin>>bonus[totalemployee];

    cout<<"Enter the tax amount :"<<endl;
    cin>>tax[totalemployee];

    cout<<"Enter the Experience you have :"<<endl;
    cin>>Experience[totalemployee];

    cout<<"Enter the Rating Given :"<<endl;
    cin>>rating[totalemployee];

     calculateSalary(totalemployee);

     totalemployee ++;

     cout<<endl<<"EMPLOYEE ADDED SUCCESSFULLY"<<endl;

}

void showrecords(){
    if(totalemployee==0){
        cout<<"NO RECORDS FOUND"<<endl;
        return;
    }

    cout<<endl<<"EMPLOYEE RECORDS"<<endl;

    for(int i=0;i<totalemployee;i++)
    {
        cout<<"\nEmployee "<<i+1<<endl;

        cout<<"Employee ID : "<<emp_id[i]<<endl;
        cout<<"Name        : "<<name[i]<<endl;
        cout<<"Age         : "<<age[i]<<endl;
        cout<<"Phone       : "<<phone[i]<<endl;
        cout<<"Gender      : "<<gender[i]<<endl;
        cout<<"Department  : "<<department[i]<<endl;
        cout<<"Designation : "<<designation[i]<<endl;
        cout<<"Email       : "<<email[i]<<endl;
        cout<<"Basic Salary: "<<basic_salary[i]<<endl;
        cout<<"Bonus       : "<<bonus[i]<<endl;
        cout<<"Tax         : "<<tax[i]<<endl;
        cout<<"Net Salary  : "<<net_salary[i]<<endl;
        cout<<"Experience  : "<<Experience[i]<<" Years"<<endl;
        cout<<"Rating      : "<<rating[i]<<"/10"<<endl;

        cout<<endl;
    }
}


void searchEmployee()
{
    if(totalemployee==0)
    {
        cout<<"\nNo Employee Found.\n";
        return;
    }

    int id;
    bool found=false;

    cout<<"\nEnter Employee ID : ";
    cin>>
    
    id;

    for(int i=0;i<totalemployee;i++)
    {
        if(emp_id[i]==id)
        {
            found=true;

            cout<<"\nEmployee Found\n";
            cout<<"Name : "<<name[i]<<endl;
            cout<<"Department : "<<department[i]<<endl;
            cout<<"Designation : "<<designation[i]<<endl;
            cout<<"Net Salary : "<<net_salary[i]<<endl;
            cout<<"Rating : "<<rating[i]<<endl;
        }
    }

    if(!found)
        cout<<"\nEmployee Not Found.\n";
}


int main()
{
    int choice;

    do
    {
        cout << "      EMPLOYEE MANAGEMENT SYSTEM" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Exit" << endl;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                ADD_EMPLOYEE();
                break;

            case 2:
                showrecords();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                cout << "\nThank You for using Employee Management System!" << endl;
                break;

            default:
                cout << "\nInvalid Choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}



