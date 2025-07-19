#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int size)
{
    int maxIndex = 0, minIndex = 0, maxval = INT_MIN, minval = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        arr[i] > maxval ? (maxval = arr[i], maxIndex = i) : 0;
        arr[i] < minval ? (minval = arr[i], minIndex = i) : 0;
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main()
{

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapMaxMin(arr, size);

    cout << "Array after swapping max and min elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}