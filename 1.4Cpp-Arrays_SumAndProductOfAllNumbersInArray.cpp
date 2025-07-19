#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)
{
    int Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

int calculateProduct(int arr[], int size)
{
    int Product = 1;
    for (int i = 0; i < size; i++)
    {
        Product *= arr[i];
    }
    return Product;
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

    int sum = calculateSum(arr, size);
    cout << "The sum of the array elements is: " << sum << endl;

    int product = calculateProduct(arr, size);
    cout << "The product of the array elements is: " << product << endl;    

    return 0;
}