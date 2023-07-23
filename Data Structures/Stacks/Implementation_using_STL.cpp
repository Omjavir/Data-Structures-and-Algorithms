#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    cout << "Top of stack: " << s.top() << endl;
    s.empty() ? cout << "Stack empty" : cout << "Stack is not empty" << endl;
    cout << "Size of stack: " << s.size() << endl;
    return 0;
}