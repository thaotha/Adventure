#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    float salary;
    char option = 'y';
    string lastName;
    string firstName;
    //bool compare;
    int ketqua;

    /* cout << "Hello.\n";
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;
    cout << "Welcome " << firstName << " " << lastName << "\n"; */
    cout << "Please enter an integer number: ";
    cin >> ketqua;
    //ketqua %= 3; //ketqua = ketqua % 3
    /* cout << ketqua << "\n";
    if (ketqua == 2)
        cout << "You lose!\n";
    else {
        if (ketqua == 1) 
            cout << "You win!\n";
        else 
            cout << "No win. No lose.\n"
    } */

    /* while (ketqua == 1) {
        cout << "Try again with other number: ";
        cin >> ketqua;
        ketqua %= 3;
    } */

    do {
        ketqua %= 3;
        cin >> ketqua;
    }
    while (ketqua == 1);

    return 0;
}
