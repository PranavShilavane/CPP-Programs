#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// pivot element as starting element
int partitionArrayStart(int arr[], int start, int end)
{
    int pivot = arr[start];

    int i = start;
    int j = end;

    while (i < j)
    {
        while (i < end && arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i <= j)
            swap(arr, i, j);
    }

    swap(arr, start, j);

    return j;
}

void quickSortStart(int arr[], int start, int end)
{

    if (start < end)
    {
        int partition = partitionArrayStart(arr, start, end);

        quickSortStart(arr, start, partition - 1);

        quickSortStart(arr, partition + 1, end);
    }
}

// pivot element as middle element
int partitionArrayMiddle(int arr[], int start, int end)
{

    int pivot = arr[(start + end) / 2];

    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
        }

        if (start <= end)
        {
            swap(arr, start, end);
            start++;
            end--;
        }
    }

    return start;
}

void quickSortMiddle(int arr[], int start, int end)
{

    int partition = partitionArrayStart(arr, start, end);

    if (start < partition - 1)
        quickSortStart(arr, start, partition - 1);

    if (partition < end)
        quickSortStart(arr, partition + 1, end);
}

void printArray(int arr[], int n)
{
    cout << "\nArray : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
}

int main()
{

    int arr[] = {7, 1, 5, 3, 6, 2, 4};
    int n = 7;

    cout << "\nArray elements BEFORE sorting : ";
    printArray(arr, n);

    // quickSortStart(arr, 0, n - 1);
    quickSortMiddle(arr, 0, n - 1);

    cout << "\nArray elements AFTER sorting : ";
    printArray(arr, n);

    return 0;
}
