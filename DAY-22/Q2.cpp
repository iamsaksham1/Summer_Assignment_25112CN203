#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout<<" Enter the sentence :";
    getline(cin, s);

    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != ' ' && (i == 0 || s[i-1] == ' '))
            count++;
    }

    cout << count << endl;

    return 0;
}