#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;
    string breed;

    void bark()
    {
        cout << "Barking " << endl;
    }
};

class Human
{
public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Hybrid : public Animal, public Human
{
    
};

int main()
{
    Hybrid obj;
    obj.speak();
    obj.bark();
    return 0;
}