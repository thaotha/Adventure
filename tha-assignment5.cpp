// Thao Ha IN200 C++
// Chapter 5
// https://github.com/thaotha/Adventure1/blob/master/tha-assignment5.cpp

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<string> nameList;
    vector<string>::iterator changeIter;
    vector<string>::const_iterator readIter;
    string nameItem;
    int option;
    char choice = 'y';
    int i;

    nameList.push_back("Doraemon");
    nameList.push_back("Sailor Moon");
    nameList.push_back("Dragon Ball");
    nameList.push_back("Tsubasa");
    //list names
    cout << "You have " << nameList.size() << " items in the list.\n";
    cout << "Here are items in the list:\n";
    for (i = 0; i < nameList.size(); i++) {
        cout << i + 1 << ". " << nameList[i] << "\n";
    }

    do {
        //give the player their options
        cout << "\nPlease select one of these following options by typing the corresponding number:\n";
        cout << "1. Add Name\n";
        cout << "2. Change Name\n";
        cout << "3. Remove Name\n";
        cout << "4. Show Names\n";
        cout << "5. Quit\n";
        cout << "Enter your selection: ";
        cin >> option;
        
        if(option == 1) {
        // add name to vector
            cout << "Enter a name to be added to current list: ";
            cin >> nameItem;
            nameList.push_back(nameItem);
            cout << nameItem + " has been added successfully!\n";
        }
        else if(option == 2) {
        // change name
            cout << "What name do you want to change? "; 
            cin >> nameItem;
            for (i = 0; i < nameList.size(); i++) {
                if (nameList[i].compare(nameItem)) {
                    cout << "There is " + nameItem + " in the list.\n";
                    break;
                }
            }
            cout << "What do you want to change this name to? ";
            cin >> nameItem;
            nameList[i-1] = nameItem;
            cout << "The change is successful.\n";
        }
        else if(option == 3) {
        // remove name
            cout << "What name do you want to remove? ";
            cin >> nameItem;
            for (i = 0; i < nameList.size(); i++) {
                if (nameList[i].compare(nameItem)) {
                    cout << "There is " + nameItem + " in the list.\n";
                    break;
                }
            }
            nameList.erase(nameList.begin() + i - 1);
            cout << nameItem + " has been removed from the list successfully.\n";
        }
        else if(option == 4) {
        // show names
            sort(nameList.begin(), nameList.end());
            cout << "Here are items in the list:\n";
            for (i = 0; i < nameList.size(); i++) {
                cout << i + 1 << ". " << nameList[i] << "\n";
            }
            
        }
        else if(option == 5) 
        // quit
            break;
        else {
            cout << "Wrong! That's not one of the options!\n";
        }

        cout << "Do you want to continue this game? (y/n): ";
        cin >> choice;
    }
    while (choice == 'y');

    cout << "Thank you for spending time to play this game!\n";
    return 0;

}