// Thao Ha IN200 C++
// Chapter 2 - Adventure #1

// https://github.com/thaotha/Adventure1/blob/master/tha-assignment2.cpp
 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    cout << "Hello, Welcome to Adventure Game!\n";

    // Set up the game
    int health = 10, attack, block, iterator = 0;
    char input = 'y';
    srand(time(0)); // seeding the random number generator with the current time

    do {
        ++iterator;
        //start the encounter
        attack = rand() % 5;
        block = rand() % 5;
        
        if (block >= attack) 
            cout << "Successful Block.\n";
        else
            health -= attack;
        
        cout << "Do you want to see the values of all of the numbers? (y/n): ";
        cin >> input;      
        if (input == 'y') {
            cout << "attack = " << attack << endl;
            cout << "block = " << block << endl;
            cout << "health = " << health << endl;
        }  
    }
    while (health > 0 && health < 4);

    this_thread::sleep_for(chrono::microseconds(25));

    if (health > 0) {
        cout << "Congratulations!!!\n";
        if (health < 5)
            cout << "You should go see the doctor!\n";
    }
    else
        cout << "You are dead!\n";

    return 0;
}