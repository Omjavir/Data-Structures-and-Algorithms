int sumOfArray(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    return arr[size - 1] + sumOfArray(arr, size - 1);
}