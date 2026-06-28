#include <iostream>
using namespace std;

const int MAX = 100;

int ticketID[MAX];
string passengerName[MAX];
string source[MAX];
string destination[MAX];
string travelDate[MAX];
int seatNo[MAX];
bool booked[MAX];

int totalTickets = 0;

// Book Ticket
void bookTicket()
{
    if(totalTickets == MAX)
    {
        cout << "Booking Limit Reached!\n";
        return;
    }

    cout << "\nEnter Ticket ID: ";
    cin >> ticketID[totalTickets];

    cin.ignore();

    cout << "Enter Passenger Name: ";
    getline(cin, passengerName[totalTickets]);

    cout << "Enter Source: ";
    getline(cin, source[totalTickets]);

    cout << "Enter Destination: ";
    getline(cin, destination[totalTickets]);

    cout << "Enter Travel Date (DD/MM/YYYY): ";
    getline(cin, travelDate[totalTickets]);

    cout << "Enter Seat Number: ";
    cin >> seatNo[totalTickets];

    booked[totalTickets] = true;

    totalTickets++;

    cout << "\nTicket Booked Successfully!\n";
}

// Display Tickets
void displayTickets()
{
    if(totalTickets == 0)
    {
        cout << "\nNo Tickets Booked.\n";
        return;
    }

    cout << "\n BOOKED TICKETS \n";

    for(int i=0;i<totalTickets;i++)
    {
        if(booked[i])
        {
            cout << "\nTicket ID      : " << ticketID[i] << endl;
            cout << "Passenger Name : " << passengerName[i] << endl;
            cout << "Source         : " << source[i] << endl;
            cout << "Destination    : " << destination[i] << endl;
            cout << "Travel Date    : " << travelDate[i] << endl;
            cout << "Seat Number    : " << seatNo[i] << endl;
            cout << "Status         : Confirmed\n";
        }
    }
}

// Search Ticket
void searchTicket()
{
    int id;
    bool found = false;

    cout << "\nEnter Ticket ID: ";
    cin >> id;

    for(int i=0;i<totalTickets;i++)
    {
        if(ticketID[i] == id && booked[i])
        {
            found = true;

            cout << "\nTicket Found!\n";
            cout << "Passenger : " << passengerName[i] << endl;
            cout << "Route     : " << source[i] << " -> " << destination[i] << endl;
            cout << "Date      : " << travelDate[i] << endl;
            cout << "Seat No   : " << seatNo[i] << endl;

            break;
        }
    }

    if(!found)
        cout << "Ticket Not Found.\n";
}

// Cancel Ticket
void cancelTicket()
{
    int id;
    bool found = false;

    cout << "\nEnter Ticket ID to Cancel: ";
    cin >> id;

    for(int i=0;i<totalTickets;i++)
    {
        if(ticketID[i] == id && booked[i])
        {
            found = true;
            booked[i] = false;

            cout << "\nTicket Cancelled Successfully!\n";
            break;
        }
    }

    if(!found)
        cout << "Ticket Not Found.\n";
}

int main()
{
    int choice;

    do
    {
       
        cout << "      TICKET BOOKING SYSTEM\n";
       

        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}