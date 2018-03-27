// Thao Ha IN200 C++
// Chapter 7 - Preparation

#include <iostream>
#include <stdlib.h>

using namespace std;

// Prototype declaration of 2 functions: increase and display
// function increase has 2 parameters: a constant pointer points to an integer, and an integer constant
void increase(int* const array, const int NUM_ELEMENTS);

// function display has 2 parameters: a constant pointer points to an integer constant, and an integer constant 
void display(const int* const array, const int NUM_ELEMENTS);

int main()
{
    cout << "Creating an array of high scores.\n\n";
    const int NUM_SCORES = 3;
    int highScores[NUM_SCORES] = {5000, 3500, 2700}; // creating an array having NUM_SCORES elements
    // an array has a  pointer pointing to its 1st element (head)

    cout << "Displaying scores using array name as a constant pointer.\n";
    cout << *highScores << endl; // print the value of 1st element in highScores array
    cout << *(highScores + 1) << endl; // print the value of 2nd element in highScores array
    cout << *(highScores + 2) << "\n\n"; // print the value of 3rd element in highScores array
    
    cout << "Increasing scores by passing array as a constant pointer.\n\n";
    increase(highScores, NUM_SCORES); // passing the highScores array as a constant pointer to function increase
    
    cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
    display(highScores, NUM_SCORES); // passing the highScores array as a constant pointer pointing to a constant to function display
   
    return 0;
}

// Implementation of function increase
void increase(int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
        array[i] += 500; // add 500 to the value of each element of the array
	}
}

// Implementation of function display
void display(const int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
        cout << array[i] << endl; // print the value of each element of the array
	}
}