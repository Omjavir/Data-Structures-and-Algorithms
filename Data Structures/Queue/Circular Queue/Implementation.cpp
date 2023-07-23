#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        if ((front == 0 && rear == size - 1) ||
            ((rear + 1) % size == front))
        {
            return false;
        }

        else if (front == -1) /* Insert First Element */
        {
            front = rear = 0;
            arr[rear] = value;
        }

        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }

        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            return -1;
        }

        int data = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
            front = 0;
        else
            front++;

        return data;
    }
};

int main()
{

    return 0;
}