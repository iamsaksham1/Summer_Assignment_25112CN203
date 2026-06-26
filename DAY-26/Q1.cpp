#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand(time(0));

    char choice;

    do{
        int secret = rand() %100 + 1;
        int guess;
        int attempts =0;
        cout<<endl<<"----!!!- NUMBER GUESSING GAME -!!!----"<<endl;
        cout<<"Guess a number between 1-100"<<endl;

        while(true){
            cout<<" Enter the number you guessed :"<<endl;
            cin>>guess;
            attempts ++;

            if(guess>secret){
                cout<<"Too high :("<<endl;
            }
            else if(guess<secret){
                cout<<"Too low :("<<endl;
            }
            else {
                cout<<"YOU GUESSES IT CORRECT :)"<<endl;
                cout << "Total Attempts: " << attempts << endl;
                break;
            }

        }

        cout<<"Do you want to play again (Y/N) ?"<<endl;
        cin>>choice;
    }
    while (choice == 'Y' || choice == 'y');

    cout << "\nThanks for playing!\n";

    return 0;
}