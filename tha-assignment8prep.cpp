// Thao Ha IN200 C++
// Chapter 8 - Preparation

//Critter Caretaker
//Simulates caring for a virtual pet

#include <iostream>

using namespace std;

// Prototype of Critter class
class Critter
{
public: // all member functions following this keyword has a public scope           
    Critter(int hunger = 0, int boredom = 0); // constructor function
    void Talk(); // member function
    void Eat(int food = 4); // member function
    void Play(int fun = 4); // member function

private: // all data members and member functions following this keyword has a private scope 
    int m_Hunger; // data member
    int m_Boredom; // data member

    int GetMood() const; // member function
    void PassTime(int time = 1); // member function 

};

// Implementation of constructor function Critter(int hunger, int boredom)
Critter::Critter(int hunger, int boredom):
    m_Hunger(hunger),
    m_Boredom(boredom)
{}

// Implementation of member function GetMood()
inline int Critter::GetMood() const 
{
    return (m_Hunger + m_Boredom);
}

// Implementation of member function PassTime(int time)
void Critter::PassTime(int time)
{
    m_Hunger += time; // edit data member m_Hunger
    m_Boredom += time; // edit data member m_Boredom
}

// Implementation of member function Talk()
void Critter::Talk()
{
    cout << "I'm a critter and I feel ";

    int mood = GetMood(); // call member function GetMood()
    if (mood > 15)
	{
        cout << "mad.\n";
	}
    else if (mood > 10)
	{
        cout << "frustrated.\n";
	}
    else if (mood > 5)
	{
        cout << "okay.\n";
	}
    else
	{
        cout << "happy.\n";
	}

    PassTime(); // call member function PassTime()
}

// Implementation of member function Eat(int food)
void Critter::Eat(int food) 
{
    cout << "Brruppp.\n";

    m_Hunger -= food; // edit data member m_Hunger
    if (m_Hunger < 0)
	{
        m_Hunger = 0;
	}

    PassTime(); // call member function PassTime()
}

// Implementation of member function Play(int fun)
void Critter::Play(int fun)
{
    cout << "Wheee!\n";

    m_Boredom -= fun; // edit data member m_Boredom
    if (m_Boredom < 0)
	{
        m_Boredom = 0;
	}

    PassTime(); // call member function PassTime()
}

int main()
{
	Critter crit; // create a new object of Critter class
	crit.Talk(); // call the member function Talk()

	int choice;
	do
    {
        cout << "\nCritter Caretaker\n\n";
        cout << "0 - Quit\n";
        cout << "1 - Listen to your critter\n";
        cout << "2 - Feed your critter\n";
        cout << "3 - Play with your critter\n\n";

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
			case 0:	
				cout << "Good-bye.\n";
				break;
			case 1:	
				crit.Talk(); // call the function Talk()
				break;
			case 2:	
				crit.Eat(); // call the function Eat()
				break;
			case 3:	
				crit.Play(); // call the function Play()
				break;
			default:
				cout << "\nSorry, but " << choice << " isn't a valid choice.\n";
        }
	} while (choice != 0);

    return 0;
}

