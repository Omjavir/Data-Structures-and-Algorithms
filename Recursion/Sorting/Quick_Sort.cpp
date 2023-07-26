#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int pivot = partition(arr, start, end);

    // sorting left part
    quickSort(arr, start, pivot - 1);
    // sorting right part
    quickSort(arr, pivot + 1, end);
}

int main()
{
    int arr[8] = {8, 12, 15, 18, 2, 5, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}