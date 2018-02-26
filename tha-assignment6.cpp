// Thao Ha IN200 C++
// Chapter 5 - Functions
// https://github.com/thaotha/Adventure1/blob/master/tha-assignment6.cpp

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int health = 30;
int totalTreasure = 0;

void story() {
    cout << "You wake up ......\n";
}

bool askYesNo(char question) {
    cout << "Would you like to go adventuring?\n";
    cout << "(y/n) >> ";
    cin >> question;
    if (question == 'y')
        return true;
    else
        return false;
}

int rollDie(int minNum, int maxNum) {
    if (minNum > maxNum) {
        cout << "You have successfully blocked!\n";
        return 1;
    }
    return 0;
}

void ending() {
    cout << "You return home with " << totalTreasure << " treasure!\n";
}

void adventure() {
    cout << "You have " << health << " health.\n";  
}


int main() {
    int attack, block, treasure;
    char opt = 'y';
    
    story();
    adventure();
    while (askYesNo(opt)) {
        attack = rand();
        block = rand();
        treasure = rand();
        cout << "Let's go adventuring.\n";
        if (rollDie(block, attack)) {
            totalTreasure += treasure;
        }
        else {
            health -= attack;
            treasure = 0;
        }
        cout << "You have " << health << " health and " << totalTreasure << " treasure.\n";
        if (health <= 0) {
            ending();
            cout << "You are dead.\n";
            break;
        }
        else {
            cout << "You ended up with " << health << " health and " << totalTreasure << " treasure.\n";
        }
    }

    ending();
    return 0;
}