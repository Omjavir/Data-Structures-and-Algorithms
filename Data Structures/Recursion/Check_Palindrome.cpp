#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int start, int end)
{
    // base case
    if (start > end)
        return true;

    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str, start + 1, end - 1);
    }
}

int main()
{
    string name = "abbccbba";
    int size = name.length();
    bool isPalindrome = checkPalindrome(name, 0, size - 1);
    if (isPalindrome)
    {
        cout << "String is Palindrome" << endl;
    }
    else
    {
        cout << "String is not Palindrome" << endl;
    }
    return 0;
}