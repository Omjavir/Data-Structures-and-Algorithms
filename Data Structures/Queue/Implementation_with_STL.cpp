#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(12);
    q.push(14);
    q.push(16);
    cout << "Front : " << q.front() << endl;
    cout << "Back : " << q.back() << endl;
    cout << "Size : " << q.size() << endl;
    if (q.empty())
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }
    return 0;
}