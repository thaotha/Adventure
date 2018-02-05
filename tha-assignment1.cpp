// Thao Ha IN200 C++
// Chapter 1 - Types, Variables, and I/O

#include <iostream>
using namespace std;

int main() {
    // 1. Variables   
    int myAge = 25;
    float myWage = 8.75f;
    char keystroke = 'n';
    bool eligibleToWork = false;
    
    // 2. Modulus
    int currentYear = 2018;
    int a = currentYear % 4;
    cout << "a = " << a << endl;

    // 3. Increment Operator
    a++;
    cout << "a = " << a << endl;
    
    // 4. Decrement Operator
    a--;
    cout << "a = " << a << endl;
    
    // 5. += and -=
    a += 2;
    cout << "a = " << a << endl;

    a -= 3;
    cout << "a = " << a << endl;

    // 6. cin Two Inputs from Player
    float bonus1, bonus2;
    cout << "Please enter 2 bonuses that you will get this year:\n";
    cin >> bonus1 >> bonus2;

    // 7. Enumerators
    enum dayInWeek {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    enum satisfaction {UNSATISFIED, NEUTRAL, SATISFIED};

    // 8. Constants
    const float MINIMUM_WAGE = 7.50f;
    const int LEGAL_ADULT_AGE = 18;

    return 0;
}