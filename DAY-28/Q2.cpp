#include <iostream>
using namespace std;

const int MAX = 100;

int accountNo[MAX];
string name[MAX];
string accountType[MAX];
float balance[MAX];

int totalAccounts = 0;

// Create Account
void createAccount()
{
    if(totalAccounts == MAX)
    {
        cout << "Bank Database Full!\n";
        return;
    }

    cout << "\nEnter Account Number: ";
    cin >> accountNo[totalAccounts];

    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, name[totalAccounts]);

    cout << "Enter Account Type (Savings/Current): ";
    getline(cin, accountType[totalAccounts]);

    cout << "Enter Initial Balance: ";
    cin >> balance[totalAccounts];

    totalAccounts++;

    cout << "\nAccount Created Successfully!\n";
}

// Display Accounts
void displayAccounts()
{
    if(totalAccounts == 0)
    {
        cout << "\nNo Accounts Found!\n";
        return;
    }

    for(int i=0;i<totalAccounts;i++)
    {
        cout << "\n============================\n";
        cout << "Account Number : " << accountNo[i] << endl;
        cout << "Name           : " << name[i] << endl;
        cout << "Account Type   : " << accountType[i] << endl;
        cout << "Balance        : Rs. " << balance[i] << endl;
    }
}

// Search Account
void searchAccount()
{
    int acc;
    bool found=false;

    cout << "\nEnter Account Number: ";
    cin >> acc;

    for(int i=0;i<totalAccounts;i++)
    {
        if(accountNo[i]==acc)
        {
            found=true;

            cout << "\nAccount Found!\n";
            cout << "Name : " << name[i] << endl;
            cout << "Type : " << accountType[i] << endl;
            cout << "Balance : Rs. " << balance[i] << endl;

            break;
        }
    }

    if(!found)
        cout << "Account Not Found!\n";
}

// Deposit
void depositMoney()
{
    int acc;
    float amount;

    cout << "\nEnter Account Number: ";
    cin >> acc;

    for(int i=0;i<totalAccounts;i++)
    {
        if(accountNo[i]==acc)
        {
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            balance[i]+=amount;

            cout << "Deposit Successful!\n";
            cout << "Updated Balance : Rs. " << balance[i] << endl;

            return;
        }
    }

    cout << "Account Not Found!\n";
}

// Withdraw
void withdrawMoney()
{
    int acc;
    float amount;

    cout << "\nEnter Account Number: ";
    cin >> acc;

    for(int i=0;i<totalAccounts;i++)
    {
        if(accountNo[i]==acc)
        {
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            if(amount>balance[i])
            {
                cout << "Insufficient Balance!\n";
            }
            else
            {
                balance[i]-=amount;

                cout << "Withdrawal Successful!\n";
                cout << "Remaining Balance : Rs. " << balance[i] << endl;
            }

            return;
        }
    }

    cout << "Account Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        
        cout <<"\n BANK ACCOUNT MANAGEMENT \n";
        

        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                createAccount();
                break;

            case 2:
                displayAccounts();
                break;

            case 3:
                searchAccount();
                break;

            case 4:
                depositMoney();
                break;

            case 5:
                withdrawMoney();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    }while(choice!=6);

    return 0;
}