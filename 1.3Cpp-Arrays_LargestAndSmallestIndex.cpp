#include <iostream>
using namespace std;

int main()
{
    // Declare an array of integers
    int arr[] = {3, 5, 1, 8, 2};

    // Initialize largest and smallest with the first element
    int largest = INT_MIN;  //
    int smallest = INT_MAX; // INFINITY in c++

    // Loop through the array to find the largest and smallest elements
    for (int i = 1; i < (sizeof(arr) / sizeof(int)); i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }

    // Output the results
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}