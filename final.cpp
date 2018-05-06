// Thao Ha IN200 C++
// Final Practical Exam 1
// https://github.com/thaotha/Adventure1/blob/master/final.cpp

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string arr[5];

void AddFavGames(vector<string>& favorites, string favGame) {
    favorites.push_back(favGame);
}

void Display(vector<string>* inv) {
    vector<string>::iterator iter;
    cout << "\nYour favorite games in alphabetical order are:\n";

    sort(inv->begin(), inv->end());
    for(iter = inv->begin(); iter != inv->end(); ++iter) {
        cout << *iter << endl;
    }
}

void FindAString(vector<string>* inv, string st) {
    vector<string>::iterator iter;
    iter = find (inv->begin(), inv->end(), st);

    if (iter != inv->end())
        cout << "The string \"" << st << "\"" << " found in your favorite games: " << *iter << '\n';
    else {
        cout << "The string \"" << st << "\"" << " NOT found in your favorite games!\n";
        AddFavGames(*inv, st);
        cout << "So, it has just been added to your favorite games.\n";
        Display(inv);
    }    
}

class Bot {
    public:           
        Bot(string myName, int myHealth = 10, int myDamage = 0); // constructor function
        
        void Battlecry() {
            cout << "My information is:\n";
            cout << "Name: " << name << endl;
            cout << "Health: " << health << endl;
            cout << "Damage: " << damage << endl;
        }

        void Attack(Bot opponent) {
            opponent.TakeDamage(3);
        }

        void TakeDamage(int givenDamage) {
            health -= givenDamage;
        }

    private:
        string name; // data member
        int health; // data member
        int damage; // data member
};

int main() {
    arr[0] = "John";
    arr[1] = "Henrich";
    arr[2] = "Paul";
    arr[3] = "Catherine";
    arr[4] = "Selena";
    cout << "The array contains these following names:\n";
    for(int i = 0; i < (sizeof(arr)/sizeof(*arr)); i++) {
        cout << arr[i] << endl;
    }

    vector<string> favs;
    AddFavGames(favs, "Tetrix");
    AddFavGames(favs, "Contra");
    AddFavGames(favs, "Red Alert");
    AddFavGames(favs, "Empire");
    AddFavGames(favs, "Final Fantasy");
    Display(&favs);

    string input;
    cout << "\nPlease enter a string: ";
    getline(cin, input);
    FindAString(&favs, input);

    return 0;
}