#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    // Default constructor
    Hero()
    {
        cout << "Default Constructor called. " << endl;
    }

    int health;

    // Parameterised constructor
    Hero(int health)
    {
        this->health = health;
    }

    void getHealth()
    {
        cout << "Health : " << this->health << endl;
    }

    void setHealth(int health)
    {
        this->health = health;
    }

    ~Hero()
    {
        cout << "Destructor called. " << endl;
    }
};

int main()
{
    // Statically
    Hero a;

    // Dynamically
    Hero *b = new Hero();
    // manually call the destructor for dynamically created objects
    delete b;
    return 0;
}