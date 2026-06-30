/*
    PROJECT ALPHA — Escape the Laboratory
    Year 2089 | A text-based escape room game

*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// ---------------------- GLOBAL CONSTANTS ----------------------
const int MAX_ITEMS = 10;
const int MAX_ROOMS  = 5;

// ---------------------- GLOBAL GAME STATE ----------------------
string inventory[MAX_ITEMS];   // holds names of collected items
int itemCount = 0;             // how many items currently held
int roomsCleared = 0;          // progress tracker

// ---------------------- UTILITY FUNCTIONS ----------------------

// Adds an item to the inventory array (acts like push_back manually)
void addItem(string item) {
    if (itemCount < MAX_ITEMS) {
        inventory[itemCount] = item;
        itemCount++;
        cout << "\n[+] Item acquired: " << item << "\n";
    }
}

// Checks if the player already holds a given item
bool hasItem(string item) {
    for (int i = 0; i < itemCount; i++) {
        if (inventory[i] == item) return true;
    }
    return false;
}

// Prints the current inventory
void showInventory() {
    cout << "\n----- INVENTORY -----\n";
    if (itemCount == 0) {
        cout << "(empty)\n";
    } else {
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ". " << inventory[i] << "\n";
        }
    }
    cout << "----------------------\n";
}

// Converts a string to lowercase manually (no <algorithm> used)
string toLower(string s) {
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

// Reads a line of input and normalizes it to lowercase
string getInput() {
    string in;
    getline(cin, in);
    return toLower(in);
}

// Small dramatic pause-style divider
void divider() {
    cout << "\n============================================\n";
}

// ---------------------- ROOM 1: STORAGE ROOM ----------------------
// Puzzle: find the hidden clue among shelf items by inspecting them
bool room1() {
    divider();
    cout << "ROOM 1: STORAGE ROOM\n";
    cout << "Dusty shelves line the walls. The AI hums overhead.\n";
    cout << "Type 'look shelf' to inspect, or 'inventory' anytime.\n";

    string shelves[5] = {"toolbox", "old map", "broken radio", "tin can", "wires"};
    bool found = false;

    while (!found) {
        cout << "\n> ";
        string cmd = getInput();

        if (cmd == "inventory") {
            showInventory();
        }
        else if (cmd == "look shelf") {
            cout << "\nThe shelf holds: ";
            for (int i = 0; i < 5; i++) {
                cout << shelves[i];
                if (i < 4) cout << ", ";
            }
            cout << "\nType the name of an item to inspect it.\n";
        }
        else {
            bool matched = false;
            for (int i = 0; i < 5; i++) {
                if (cmd == shelves[i]) {
                    matched = true;
                    if (shelves[i] == "tin can") {
                        cout << "\nInside the tin can, a folded note reads: \"KEY-7\"\n";
                        addItem("Storage Key");
                        found = true;
                    } else {
                        cout << "\nNothing useful here Just a " << shelves[i] << ".\n";
                    }
                }
            }
            if (!matched) {
                cout << "Nothing happens.\n";
            }
        }
    }

    cout << "\nThe Storage Key unlocks the door to the next room.\n";
    roomsCleared++;
    return true;
}

// ---------------------- ROOM 2: LAB ROOM ----------------------
// Puzzle: number sequence logic puzzle stored in an array
bool room2() {
    divider();
    cout << "ROOM 2: LAB ROOM\n";
    cout << "A console blinks: \"COMPLETE THE SEQUENCE\"\n";

    int sequence[5] = {2, 4, 8, 16, 0}; // last value missing, pattern: x2
    int answer = 32;

    cout << "Sequence shown: ";
    for (int i = 0; i < 4; i++) cout << sequence[i] << " ";
    cout << "? \n";

    bool solved = false;
    while (!solved) {
        cout << "\nEnter the missing number: ";
        string in = getInput();
        int guess = atoi(in.c_str());

        if (guess == answer) {
            cout << "\nThe console unlocks a drawer. Inside: a small vial labeled \"Sample X\".\n";
            addItem("Sample X");
            solved = true;
        } else {
            cout << "Incorrect. The AI voice warns: \"Logic error detected.\"\n";
        }
    }

    cout << "\nA hidden panel slides open revealing the exit.\n";
    roomsCleared++;
    return true;
}

// ---------------------- ROOM 3: SERVER ROOM ----------------------
// Puzzle: unscramble a string to find the password
bool room3() {
    divider();
    cout << "ROOM 3: SERVER ROOM\n";
    cout << "Rows of blinking servers. A screen displays scrambled text:\n";

    string scrambled = "RYTSE"; // unscrambled: ENTRY
    string realAnswer = "entry";

    cout << "SCRAMBLED CODE: " << scrambled << "\n";
    cout << "Unscramble it and type the word to proceed.\n";

    bool solved = false;
    while (!solved) {
        cout << "\n> ";
        string guess = getInput();
        if (guess == realAnswer) {
            cout << "\nACCESS GRANTED. A USB drive ejects from the terminal.\n";
            addItem("USB Drive");
            solved = true;
        } else if (guess == "hint") {
            cout << "Hint: It's the opposite of EXIT.\n";
        } else {
            cout << "ACCESS DENIED. (type 'hint' if stuck)\n";
        }
    }

    roomsCleared++;
    return true;
}

// ---------------------- ROOM 4: SECURITY ROOM ----------------------
// Puzzle: keypad combination built from clues collected earlier
bool room4() {
    divider();
    cout << "ROOM 4: SECURITY ROOM\n";
    cout << "A keypad glows. Beside it, a note: \"Combine what you carry.\"\n";

    // The code is built from item counts/letters the player has gathered
    // For this puzzle: code = number of items collected so far, repeated
    string code = "317";

    if (hasItem("Storage Key") && hasItem("Sample X") && hasItem("USB Drive")) {
        cout << "Your items react to the keypad, illuminating numbers: 3 - 1 - 7\n";
    } else {
        cout << "The keypad stays dark. You may be missing earlier items.\n";
    }

    bool solved = false;
    while (!solved) {
        cout << "\nEnter the 3-digit code: ";
        string guess = getInput();
        if (guess == code) {
            cout << "\nThe door hisses open. A keycard drops into your hand.\n";
            addItem("Master Keycard");
            solved = true;
        } else {
            cout << "ERROR. Incorrect combination.\n";
        }
    }

    roomsCleared++;
    return true;
}

// ---------------------- ROOM 5: FINAL EXIT ----------------------
// Puzzle: requires all items collected to escape
bool room5() {
    divider();
    cout << "ROOM 5: THE EXIT CHAMBER\n";
    cout << "The AI speaks: \"Insert your Master Keycard to override the lock.\"\n";

    if (hasItem("Master Keycard")) {
        cout << "\nType 'insert keycard' to proceed.\n";
        bool done = false;
        while (!done) {
            cout << "\n> ";
            string cmd = getInput();
            if (cmd == "insert keycard") {
                cout << "\nThe AI voice glitches: \"OVERRIDE ACCEPTED...\"\n";
                cout << "The final door slides open. Sunlight floods in.\n";
                done = true;
                roomsCleared++;
                return true;
            } else if (cmd == "inventory") {
                showInventory();
            } else {
                cout << "The door does not respond to that.\n";
            }
        }
    } else {
        cout << "\nYou lack the Master Keycard. You are trapped forever.\n";
        return false;
    }
    return false;
}

// ---------------------- ENDINGS ----------------------
void winEnding() {
    divider();
    cout << "YOU ESCAPED PROJECT ALPHA LABORATORY!\n";
    cout << "Rooms cleared: " << roomsCleared << "/" << MAX_ROOMS << "\n";
    showInventory();
    cout << "Thank you for playing.\n";
}

void loseEnding() {
    divider();
    cout << "GAME OVER — You remain trapped forever in Project ALPHA.\n";
    cout << "Rooms cleared before failure: " << roomsCleared << "/" << MAX_ROOMS << "\n";
}

// ---------------------- INTRO ----------------------
void intro() {
    cout << "============================================\n";
    cout << "        YEAR 2089 — PROJECT ALPHA\n";
    cout << "============================================\n";
    cout<< "=============Welcome In Saksham's Trap Game=============="<<endl;
    cout << "You are an engineer trapped inside Project ALPHA Laboratory.\n";
    cout << "The AI security system has locked every door.\n";
    cout << "You have " << MAX_ROOMS << " rooms to clear.\n";
    cout << "Each room hides clues, puzzles, keys, and secret items.\n";
    cout << "Escape... or remain trapped forever.\n";
    cout << "\nPress ENTER to begin.";
    string dummy;
    getline(cin, dummy);
}

// ---------------------- MAIN ----------------------
int main() {
    intro();

    bool alive = true;

    if (alive) alive = room1();
    if (alive) alive = room2();
    if (alive) alive = room3();
    if (alive) alive = room4();
    if (alive) alive = room5();

    if (alive && roomsCleared == MAX_ROOMS) {
        winEnding();
    } else {
        loseEnding();
    }

    return 0;
}
