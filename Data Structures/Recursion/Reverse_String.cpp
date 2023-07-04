#include <bits/stdc++.h>
using namespace std;

string reverseString(string name, int start, int end)
{
    // base case
    if (start > end)
    {
        return name;
    }

    swap(name[start++], name[end--]);
    return reverseString(name, start, end);
}

int main()
{
    string name = "javir";
    int size = name.length();
    cout << "Size : " << size << endl;
    cout << "Normal string : " << name << endl;
    string ans = reverseString(name, 0, size - 1);
    cout << "Reversed string : " << ans << endl;
    return 0;
}