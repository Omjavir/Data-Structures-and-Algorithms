#include <bits/stdc++.h>
using namespace std;

void srcToDest(int src, int dest, int steps)
{
    cout << "Src : " << src << " Destination : " << dest << endl;
    if (src == dest)
    {
        cout << "Reached!! " << endl;
        return;
    }
    cout << "It took " << steps << " steps to react the destination!!! " << endl;
    steps++;
    srcToDest(src + 2, dest, steps);
}

int main()
{
    int src = 6;
    int dest = 10;
    int steps = 1;
    srcToDest(src, dest, steps);
    return 0;
}