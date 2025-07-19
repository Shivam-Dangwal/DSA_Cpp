#include <iostream>
using namespace std;

void printintersection(int arr1[], int size1, int arr2[], int size2)
{
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break; // To avoid printing duplicates from arr1
            }
        }
    }
    cout << endl;
}

int main()
{

    int size1;
    cout << "Enter the size of the array1: ";
    cin >> size1;
    int arr1[size1];

    cout << "Enter the elements of the array1: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the size of the array2: ";
    cin >> size2;
    int arr2[size2];

    cout << "Enter the elements of the array2: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    printintersection(arr1, size1, arr2, size2);

    return 0;
}