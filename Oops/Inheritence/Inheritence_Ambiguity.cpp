#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "Printing inside class A" << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "Printing inside class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    // obj.print(); // will throw an error : `request for member 'print' is ambiguous`
    obj.A ::print();
    obj.B ::print();
    return 0;
}