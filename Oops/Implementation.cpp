#include <bits/stdc++.h>
// #include "Hero.cpp"

class Hero
{
private:
    int health;

public:
    int level;

    int getHealth()
    {
        return health;
    }

    int getLevel()
    {
        return level;
    }

    void setHealth(int value)
    {
        health = value;
    }

    void setLevel(int value)
    {
        level = value;
    }
};

using namespace std;
int main()
{
    /*
    // **Basic ***
    Hero h1;
    h1.level = 3;
    cout << "Level of h1 : " << h1.level << endl;

    cout << "Getter Function -> Health of h1 : " << h1.getHealth() << endl;
    h1.setHealth(80);
    cout << "Setter Function -> Health of h1 : " << h1.getHealth() << endl;
    cout << "Getter Function -> Health of h1 : " << h1.getHealth() << endl;
    h1.setLevel(1);
    cout << "Getter Function -> Level of h1 : " << h1.getLevel() << endl;
    */

    /**/
    // ** Static vs Dynamic Allocation **
    Hero om;
    cout << "Level of om : " << om.level << endl;
    cout << "Health of om : " << om.getHealth() << endl;

    Hero *anuj = new Hero;
    cout << "Level of anuj : " << (*anuj).level << endl;
    // ** Here anuj is the address of the pointer so for derefrencing we are writing (*anuj); **
    cout << "Health of anuj before setter function : " << (*anuj).getHealth() << endl;
    (*anuj).setHealth(90);
    cout << "Health of anuj after setter function : " << (*anuj).getHealth() << endl;
    
    /*
    // ** Alternate method to access the function **
    cout << " Alternate method to access the function : " << endl;
    cout << "Level of anuj : " << anuj->level << endl;
    cout << "Health of anuj before setter function : " << anuj->getHealth() << endl;
    (*anuj).setHealth(90);
    cout << "Health of anuj after setter function : " << anuj->getHealth() << endl;
    */
    return 0;
}