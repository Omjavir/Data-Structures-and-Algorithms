#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;
    string breed;

    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
};

class Cat : public Animal
{
};

int main()
{
    Cat c;
    c.speak();
    return 0;
}