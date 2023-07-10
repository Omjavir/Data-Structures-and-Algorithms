#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "Function A" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Function B" << endl;
    }
};

class C : public A
{
public:
    void funcC()
    {
        cout << "Function C" << endl;
    }
};

int main()
{
    cout << "class B Calling for class A" << endl;
    B b;
    b.funcA();
    b.funcB();
    // b.funcC(); // Will throw an error

    cout << "class C Calling for class A" << endl;
    C c;
    c.funcA();
    c.funcC();
    // c.funcB(); // Will throw an error
    return 0;
}