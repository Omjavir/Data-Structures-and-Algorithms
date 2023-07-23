#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(10);
    dq.push_back(12);
    cout << "Front : " << dq.front() << endl;
    cout << "Rear : " << dq.back() << endl;

    dq.pop_back();
    cout << "Front : " << dq.front() << endl;
    cout << "Rear : " << dq.back() << endl;

    dq.pop_front();
    if (dq.empty())
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue is not empty!" << endl;
    }
    return 0;
}