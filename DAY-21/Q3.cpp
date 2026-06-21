#include<iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);

    int vowel_count = 0;
    int consonants_count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
               s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                vowel_count++;
            }
            else
            {
                consonants_count++;
            }
        }
    }

    cout << "Vowels = " << vowel_count << endl;
    cout << "Consonants = " << consonants_count << endl;

    return 0;
}