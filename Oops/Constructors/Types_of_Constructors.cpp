#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    // Default constructor
    Hero()
    {
        cout << "Constructor called. " << endl;
    }

    int health;

    // Parameterised constructor
    Hero(int health)
    {
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &object) // To save the program from infinite loop we use "&" which means it is passed by reference and a new copy will not get created.
    {
        cout << "Copy constructor called. " << endl;
        this->health = object.health;
    }

    void getHealth()
    {
        cout << "Health : " << this->health << endl;
    }

    void setHealth(int health)
    {
        this->health = health;
    }
};

int main()
{
    Hero om(92);
    // om.setHealth(99);
    om.getHealth();

    // Copy constructor
    Hero vishal(om); // vishal.health = om.health;
    vishal.getHealth();
    // vishal.setHealth(40);
    // vishal.getHealth();
    return 0;
}