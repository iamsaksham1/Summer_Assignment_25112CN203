#include <iostream>
using namespace std;

const int MAX = 100;

string name[MAX];
string phone[MAX];
string email[MAX];
string address[MAX];

int totalContacts = 0;

// Add Contact
void addContact()
{
    if(totalContacts == MAX)
    {
        cout << "Contact List Full!\n";
        return;
    }

    cin.ignore();

    cout << "\nEnter Name: ";
    getline(cin, name[totalContacts]);

    cout << "Enter Phone Number: ";
    getline(cin, phone[totalContacts]);

    cout << "Enter Email: ";
    getline(cin, email[totalContacts]);

    cout << "Enter Address: ";
    getline(cin, address[totalContacts]);

    totalContacts++;

    cout << "\nContact Added Successfully!\n";
}

// Display Contacts
void displayContacts()
{
    if(totalContacts == 0)
    {
        cout << "\nNo Contacts Found.\n";
        return;
    }

    cout << "\n========== CONTACT LIST ==========\n";

    for(int i = 0; i < totalContacts; i++)
    {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name    : " << name[i] << endl;
        cout << "Phone   : " << phone[i] << endl;
        cout << "Email   : " << email[i] << endl;
        cout << "Address : " << address[i] << endl;
    }
}

// Search Contact
void searchContact()
{
    string searchName;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Name to Search: ";
    getline(cin, searchName);

    for(int i = 0; i < totalContacts; i++)
    {
        if(name[i] == searchName)
        {
            found = true;

            cout << "\nContact Found!\n";
            cout << "Name    : " << name[i] << endl;
            cout << "Phone   : " << phone[i] << endl;
            cout << "Email   : " << email[i] << endl;
            cout << "Address : " << address[i] << endl;

            break;
        }
    }

    if(!found)
        cout << "Contact Not Found.\n";
}

// Update Contact
void updateContact()
{
    string searchName;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Name to Update: ";
    getline(cin, searchName);

    for(int i = 0; i < totalContacts; i++)
    {
        if(name[i] == searchName)
        {
            found = true;

            cout << "\nEnter New Phone: ";
            getline(cin, phone[i]);

            cout << "Enter New Email: ";
            getline(cin, email[i]);

            cout << "Enter New Address: ";
            getline(cin, address[i]);

            cout << "\nContact Updated Successfully!\n";
            break;
        }
    }

    if(!found)
        cout << "Contact Not Found.\n";
}

// Delete Contact
void deleteContact()
{
    string searchName;
    bool found = false;

    cin.ignore();

    cout << "\nEnter Name to Delete: ";
    getline(cin, searchName);

    for(int i = 0; i < totalContacts; i++)
    {
        if(name[i] == searchName)
        {
            found = true;

            for(int j = i; j < totalContacts - 1; j++)
            {
                name[j] = name[j + 1];
                phone[j] = phone[j + 1];
                email[j] = email[j + 1];
                address[j] = address[j + 1];
            }

            totalContacts--;

            cout << "\nContact Deleted Successfully!\n";
            break;
        }
    }

    if(!found)
        cout << "Contact Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        
        cout << "     CONTACT MANAGEMENT SYSTEM" << endl;
        
        cout << "1. Add Contact" << endl;
        cout << "2. Display Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Update Contact" << endl;
        cout << "5. Delete Contact" << endl;
        cout << "6. Exit" << endl;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updateContact();
                break;

            case 5:
                deleteContact();
                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}