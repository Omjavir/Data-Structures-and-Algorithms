#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);
    st.push(20);
    // st.push(22); // stack overflow

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    // cout << st.peek() << endl;
    // st.pop(); // stack is empty
    cout << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        cout << "stack is  not empty" << endl;
    }
    return 0;
}