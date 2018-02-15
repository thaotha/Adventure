// Thao Ha IN200 C++
// Chapter 3

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

int main() {
    // 1. Create an array of strings and use a Collection Initializer to add 4 video games to the list.
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS] = {"Tetris", "Empire", "Half-Life 2", "Contra"};
    int numItems = 4;
    char input = 'y';

    // 2. Create a for loop that will iterate through the list and look for the game "Half-Life 2"
    for (int i = 0; i < numItems; i++) {
        if (inventory[i].compare("Half-Life 2")) {
            cout << "There is the game \"Half-Life 2\" in this current list.\n";
            break;
        }
            
    }

    // 3. Create code that will ask the player for another video game to add to the list, and then add it.
    cout << "Would you like to add another video game to current list? (y/n): ";
    cin >> input;
    if (input == 'y') {
        if (numItems < MAX_ITEMS) {
            cout << "Please enter a name of video game that you want to add to current list: ";
            cin >> inventory[numItems++];
        }
        else 
            cout << "The list of video games is full.\n";
    }

    return 0;
}