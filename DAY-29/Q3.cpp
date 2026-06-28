#include <iostream>
#include <string>
using namespace std;

string str;

// Enter String
void enterString()
{
    cin.ignore();

    cout << "Enter String: ";
    getline(cin, str);

    cout << "String Stored Successfully!\n";
}

// Display String
void displayString()
{
    // Print the string
    for(int i=0; i<str.size(); i++){
        cout<<str[i]<<" ";
    }
}

// Find Length
void findLength()
{
    // Find length using loop OR str.length()
    cout<<"Length of string is :"<<str.length();
}

// Reverse String
void reverseString()
{
    // Use Two Pointer Method
    // left = 0
    // right = str.length()-1
    // Swap until left < right
    int i=0;
    int j= str.size()-1;
    while(i<j){
        int temp = str[i];
        str[i]= str[j];
        str[j]= temp;
        i++;
        j--;
    }
}

// Check Palindrome
void palindrome()
{
    // Compare first and last characters
    // Move towards center
    // Print Palindrome / Not Palindrome
    int i=0;
    int j = str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            cout<<"Not Palindrome";
            return;
        }
        i++;
        j--;
        
    }
    cout << "Palindrome";
}

// Convert to Uppercase
void upperCase()
{
    // Traverse string
    // Convert lowercase letters to uppercase
    for(int i=0; i<str.size(); i++){
        cout<<toupper(str[i]);
    }
}

// Convert to Lowercase
void lowerCase()
{
    // Traverse string
    // Convert uppercase letters to lowercase
    for(int i=0; i<str.size(); i++){
        cout<<tolower(str[i]);
    }
}

// Count Vowels
void countVowels()
{
    // Traverse string
    // Count a,e,i,o,u (both upper & lower case)
    int count = 0;
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    cout<<count;
    
}

// Count Consonants
void countConsonants()
{
    // Count alphabets except vowels
    int count = 0;
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
        }
    }
    cout<<count;
}

// Count Words
void countWords()
{
    // Count spaces
    // Words = spaces + 1
    int spaces = 0;
    for(int i=0; i<str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i]=' '){
            spaces++;
        }
    }
    cout<<"Total Words ="<<spaces+1;

}

// Search Character
void searchCharacter()
{
    char ch;
    bool found = false;

    cout << "Enter Character: ";
    cin >> ch;

    int i = 0;

    while(i < str.size())
    {
        if(str[i] == ch)
        {
            cout << "Character Found at Index: " << i << endl;
            found = true;
        }

        i++;
    }

    if(!found)
    {
        cout << "Character Not Found!" << endl;
    }
}

// Replace Character
void replaceCharacter()
{
    char oldChar, newChar;
    bool found = false;

    cout << "Enter Character to Replace: ";
    cin >> oldChar;

    cout << "Enter New Character: ";
    cin >> newChar;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            found = true;
        }
    }

    if(found)
    {
        cout << "Updated String: " << str << endl;
    }
    else
    {
        cout << "Character Not Found!" << endl;
    }
}
// comparision
void compareStrings()
{
    string str2;

    cin.ignore();

    cout << "Enter Second String: ";
    getline(cin, str2);

    if(str == str2)
    {
        cout << "Both Strings are Equal." << endl;
    }
    else
    {
        cout << "Both Strings are Different." << endl;
    }
}
// Concatenate Strings
void concatenateStrings()
{
    string str2;

    cin.ignore();

    cout << "Enter Second String: ";
    getline(cin, str2);

    string result = str + str2;

    cout << "Concatenated String: " << result << endl;
}
int main()
{
    int choice;

    do
    {
        cout << "\n========== STRING OPERATION SYSTEM ==========\n";

        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Check Palindrome\n";
        cout << "6. Convert to Uppercase\n";
        cout << "7. Convert to Lowercase\n";
        cout << "8. Count Vowels\n";
        cout << "9. Count Consonants\n";
        cout << "10. Count Words\n";
        cout << "11. Search Character\n";
        cout << "12. Replace Character\n";
        cout << "13. Compare Strings\n";
        cout << "14. Concatenate Strings\n";
        cout << "15. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                enterString();
                break;

            case 2:
                displayString();
                break;

            case 3:
                findLength();
                break;

            case 4:
                reverseString();
                break;

            case 5:
                palindrome();
                break;

            case 6:
                upperCase();
                break;

            case 7:
                lowerCase();
                break;

            case 8:
                countVowels();
                break;

            case 9:
                countConsonants();
                break;

            case 10:
                countWords();
                break;

            case 11:
                searchCharacter();
                break;

            case 12:
                replaceCharacter();
                break;

            case 13:
                compareStrings();
                break;

            case 14:
                concatenateStrings();
                break;

            case 15:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 15);

    return 0;
}