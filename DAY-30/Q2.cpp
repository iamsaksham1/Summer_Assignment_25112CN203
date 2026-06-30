#include <iostream>
using namespace std;

const int MAX = 100;

// Global Arrays
int bookID[MAX];
string bookName[MAX];
string author[MAX];
bool isIssued[MAX];

int totalBooks = 0;

// Function to Add Book
void addBook() {
    if (totalBooks == MAX) {
        cout << "Library is Full!\n";
        return;
    }

    cout << "\nEnter Book ID: ";
    cin >> bookID[totalBooks];

    cin.ignore();

    cout << "Enter Book Name: ";
    getline(cin, bookName[totalBooks]);

    cout << "Enter Author Name: ";
    getline(cin, author[totalBooks]);

    isIssued[totalBooks] = false;

    totalBooks++;

    cout << "\nBook Added Successfully!\n";
}

// Function to Display Books
void displayBooks() {

    if (totalBooks == 0) {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n========== LIBRARY BOOKS ==========\n";

    for (int i = 0; i < totalBooks; i++) {

        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID : " << bookID[i] << endl;
        cout << "Book Name : " << bookName[i] << endl;
        cout << "Author : " << author[i] << endl;

        if (isIssued[i])
            cout << "Status : Issued\n";
        else
            cout << "Status : Available\n";
    }
}

// Function to Issue Book
void issueBook() {

    int id;

    cout << "\nEnter Book ID to Issue: ";
    cin >> id;

    bool found = false;

    for (int i = 0; i < totalBooks; i++) {

        if (bookID[i] == id) {

            found = true;

            if (isIssued[i]) {
                cout << "Book is already Issued.\n";
            }
            else {
                isIssued[i] = true;
                cout << "Book Issued Successfully!\n";
            }

            break;
        }
    }

    if (!found) {
        cout << "Book ID Not Found.\n";
    }
}

// Function to Return Book
void returnBook() {

    int id;

    cout << "\nEnter Book ID to Return: ";
    cin >> id;

    bool found = false;

    for (int i = 0; i < totalBooks; i++) {

        if (bookID[i] == id) {

            found = true;

            if (!isIssued[i]) {
                cout << "Book is already Available.\n";
            }
            else {
                isIssued[i] = false;
                cout << "Book Returned Successfully!\n";
            }

            break;
        }
    }

    if (!found) {
        cout << "Book ID Not Found.\n";
    }
}

// Function to Search Book
void searchBook() {

    int id;

    cout << "\nEnter Book ID to Search: ";
    cin >> id;

    bool found = false;

    for (int i = 0; i < totalBooks; i++) {

        if (bookID[i] == id) {

            found = true;

            cout << "\nBook Found!\n";
            cout << "Book ID : " << bookID[i] << endl;
            cout << "Book Name : " << bookName[i] << endl;
            cout << "Author : " << author[i] << endl;

            if (isIssued[i])
                cout << "Status : Issued\n";
            else
                cout << "Status : Available\n";

            break;
        }
    }

    if (!found) {
        cout << "Book ID Not Found.\n";
    }
}

// Main Function
int main() {

    int choice;

    do {

        cout << "\nLIBRARY MANAGEMENT SYSTEM \n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Search Book\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            addBook();
            break;

        case 2:
            displayBooks();
            break;

        case 3:
            issueBook();
            break;

        case 4:
            returnBook();
            break;

        case 5:
            searchBook();
            break;

        case 6:
            cout << "\nThank You for Using Library Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}