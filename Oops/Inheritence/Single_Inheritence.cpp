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

int main()
{
    Dog d;
    d.speak();
    return 0;
}