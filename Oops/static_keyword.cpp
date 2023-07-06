#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    int health;
    int level;
    static int timeToComplete;

    Hero()
    {
        cout << "Default constructor called" << endl;
    }

    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
    }

    void print()
    {
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
    }

    static int staticFunction()
    {
        return timeToComplete;
    }
};

int Hero ::timeToComplete = 25;

int main()
{
    Hero om(89, 3);
    om.print();
    cout << "Time to complete: " << Hero::staticFunction() << endl;
    return 0;
}