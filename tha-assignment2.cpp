// Thao Ha IN200 C++
// Chapter 2 - Adventure #1

#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main() {
    cout << "Welcome to Adventure Game!\n";

    // Set up the game
    int health = 10, attack, block, iterator = rand();
    do {
        iterator++;
        //start the encounter
        attack = rand() % 5;
        block = rand() % 5;
        cout << "attack = " << attack << endl;
        cout << "block = " << block << endl;
        if (block >= attack) 
            cout << "Successful block.\n";
        else
            health -= attack;
        Sleep(100);
    }
    while (health > 0 && health < 4);

    if (health > 0)
        cout << "Congratulations player\n";
        if (health < 5)
            cout << "You should go to visit a doctor!\n";
    else
        cout << "You are dead!\n";

    return 0;
}