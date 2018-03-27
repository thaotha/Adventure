// Thao Ha IN200 C++
// Chapter 7 - References Code Creation
// https://github.com/thaotha/Adventure1/blob/master/tha-assignment7.cpp

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

void checkAge(int age, string name);
void display(vector<string>& inv);
void add(vector<string>& inv, string& st);
float& taxCalulate(float income, float& tax);

int main()
{
    int myAge = 30;
    string myName = "Thao Ha";
    float myIncome = 50000.00;
    float& myTax = myIncome; // reference must be initialied
    vector<string> moviesList;
    const vector<string>& movies = moviesList;
    string newMovie = "Ironman";

    cout << "Welcome " << myName << "!\n";
    checkAge(myAge, myName);

    moviesList.push_back("Superman");
    moviesList.push_back("Transformer");
    moviesList.push_back("Catwoman");
    moviesList.push_back("Fast and Furious");
    display(moviesList);
    add(moviesList, newMovie);
    cout << "\nAfter adding a new movie to your favorite movies list,\n";
    display(moviesList);
    
    cout << "\nThe tax on your annual income is $" << taxCalulate(myIncome, myTax) << endl;
   
    return 0;
}

void checkAge(int age, string name) {
    if (age >= 18)
        cout << name << " is legally eligible to work.\n\n";
}

void display(vector<string>& inv) {
    cout << "Your favorite movies are:\n";
    for(vector<string>::iterator iter = inv.begin(); iter != inv.end(); ++iter) {
        cout << *iter << endl;
    }
}

void add(vector<string>& inv, string& st) {
    inv.push_back(st);
}

float& taxCalulate(float income, float& tax) {
    tax = income * 0.25; // Tax = 25% of annual income
    return tax;
}