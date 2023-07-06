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
};

int main()
{
    Hero om;
    cout << "Address of om : " << &om << endl;
    return 0;
}