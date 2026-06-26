#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string questions[5] = {
        "Which language is known as the mother of all programming languages?",
        "Which keyword is used to create a function in C++?",
        "How many bits are there in one byte?",
        "Which operator is used for equality comparison?",
        "Which company developed C++?"
    };

    string options[5][4] = {
        {"A. C", "B. COBOL", "C. FORTRAN", "D. Python"},
        {"A. function", "B. define", "C. void", "D. create"},
        {"A. 4", "B. 8", "C. 16", "D. 32"},
        {"A. =", "B. ==", "C. !=", "D. >="},
        {"A. Google", "B. Microsoft", "C. Bell Labs", "D. Apple"}
    };

    char answer[5] = {'C','C','B','B','C'};

    string player;
    char choice;
    int score = 0;

    cout << "=========================================\n";
    cout << "          C++ QUIZ CHALLENGE\n";
    cout << "=========================================\n";

    cout << "Enter Your Name: ";
    getline(cin, player);

    cout << "\nWelcome " << player << "!\n";
    cout << "Each correct answer = 10 Marks\n";
    cout << "-----------------------------------------\n";

    for(int i=0;i<5;i++)
    {
        cout << "\nQuestion " << i+1 << " of 5\n";
        cout << questions[i] << endl;

        for(int j=0;j<4;j++)
            cout << options[i][j] << endl;

        cout << "Your Answer : ";
        cin >> choice;

        choice = toupper(choice);

        if(choice == answer[i])
        {
            cout << "Correct!\n";
            score += 10;
        }
        else
        {
            cout << "Wrong!\n";
            cout << "Correct Answer : " << answer[i] << endl;
        }

        cout << "Current Score : " << score << "/50\n";
        cout << "-----------------------------------------\n";
    }

    cout << "\n========== FINAL RESULT ==========\n";
    cout << "Player : " << player << endl;
    cout << "Final Score : " << score << "/50\n";

    if(score == 50)
        cout << "Grade : A+ (Quiz Master)\n";
    else if(score >= 40)
        cout << "Grade : A\n";
    else if(score >= 30)
        cout << "Grade : B\n";
    else if(score >= 20)
        cout << "Grade : C\n";
    else
        cout << "Grade : D (Keep Practicing)\n";

    cout << "==================================\n";

    return 0;
}