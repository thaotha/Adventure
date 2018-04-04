// Thao Ha IN200 C++
// Chapter 8 - Pointers Code Creation
// https://github.com/thaotha/Adventure1/blob/master/tha-assignment8.cpp

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

// Passing an array and a bool by value
void findMax(int a[], bool flag);
//Passing a vector and a string by reference (using pointers)
void add(vector<string>* inv, string* st);
void display(vector<string>* inv);
// Returning a pointer to a string
string* showSpecificElement(vector<string>* inv, int num);

const int ELEMENT_NUM = 4;

int main()
{
    int myAge = 30;
    bool fl = true;
    
    string movie = "Ironman";
    string *newMovie = &movie;
    vector<string> *moviesList = NULL;

    string * const m = &movie; // Creating a constant pointer
    int const *ptr; // Creating a pointer to a constant (read-only)
    int const * const p = &myAge; // Creating a constant pointer to a constant
    
    int arr[ELEMENT_NUM] = {3, 17, 8, 24};
    findMax(arr, fl);

    moviesList->push_back("Superman");
    moviesList->push_back("Transformer");
    moviesList->push_back("Catwoman");
    moviesList->push_back("Fast and Furious");
    display(moviesList);
    add(moviesList, newMovie);
    cout << "\nAfter adding a new movie to your favorite movies list,\n";
    display(moviesList);
    
    cout << "\nThe 2nd element in the movies List is " << showSpecificElement(moviesList, 2) << endl;
   
    return 0;
}

void findMax(int a[], bool flag) {
    int temp = a[0];
    
    for(int i=1; i<ELEMENT_NUM; i++) {
        if(temp < a[i])
            temp = a[i];
    }

    if(temp % 2 == 0) {
        flag = true;
        cout <<"The max number of this array is an even number. ";
    }
    else {
        flag = false;
        cout <<"The max number of this array is an odd number. ";
    }

    cout <<"It is " << temp << endl;
}

void add(vector<string>* inv, string* st) {
    inv->push_back(*st);
}

void display(vector<string>* inv) {
    cout << "Your favorite movies are:\n";
    for(vector<string>::iterator iter = inv->begin(); iter != inv->end(); ++iter) {
        cout << *iter << endl;
    }
}

string* showSpecificElement(vector<string>* inv, int num) {
    return &((*inv)[num]);
}