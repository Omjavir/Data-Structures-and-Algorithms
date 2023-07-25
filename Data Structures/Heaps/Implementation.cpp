#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int value)
    {
        size = size + 1;
        int index = size;
        arr[index] = value;

        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete." << endl;
            return;
        }

        // step 1 : put last element into first index
        arr[1] = arr[size];

        // step 2 : remove last element
        size--;

        // step 3 : Take root node to its corrent position
        int i = 1;
        while (i < size)
        {
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex < size && arr[i] < arr[leftIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if (rightIndex < size && arr[i] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
    }
};

// ** For Max-Heap
void heapifyForMaxHeap(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapifyForMaxHeap(arr, n, largest);
    }
}

// ** For Min-Heap
void heapifyForMinHeap(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[smallest] > arr[left])
    {
        smallest = left;
    }

    if (right < n && arr[smallest] > arr[right])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapifyForMinHeap(arr, n, smallest);
    }
}

int main()
{
    Heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    h.deleteFromHeap();
    h.print();

    // Heapify Algorithm
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // ** For Max-Heap
    for (int i = n / 2; i > 0; i--)
    {
        heapifyForMaxHeap(arr, n, i);
    }

    // ** For Min-Heap
    // for (int i = n / 2 - 1; i >= 0; i--)
    // {
    //     heapifyForMinHeap(arr, n, i);
    // }

    cout << "Printing the heapify function : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // *** STL ***
    cout << "STL : " << endl;
    // For Max Heap
    priority_queue<int> maxHeap;
    maxHeap.push(5);
    maxHeap.push(10);
    maxHeap.push(3);
    maxHeap.push(7);
    maxHeap.push(9);
    maxHeap.push(12);

    cout << " Element at top : " << maxHeap.top() << endl;
    cout << "Size : " << maxHeap.size() << endl;
    maxHeap.pop();
    cout << " Element at top : " << maxHeap.top() << endl;
    cout << "Size : " << maxHeap.size() << endl;
    if (maxHeap.empty())
    {
        cout << "Queue is empty : " << endl;
    }
    else
    {
        cout << "Queue is not empty : " << endl;
    }

    // For Min - Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.push(10);
    minHeap.push(3);
    minHeap.push(7);
    minHeap.push(9);
    minHeap.push(12);

    cout << " Element at top : " << minHeap.top() << endl;
    cout << "Size : " << minHeap.size() << endl;
    minHeap.pop();
    cout << " Element at top : " << minHeap.top() << endl;
    cout << "Size : " << minHeap.size() << endl;
    if (minHeap.empty())
    {
        cout << "Queue is empty : " << endl;
    }
    else
    {
        cout << "Queue is not empty : " << endl;
    }

    return 0;
}