#include<iostream>
using namespace std;

int main()
{
    // Different ways of declaring arrays in C++
    int arr1[5];// empty array of size 5
    int arr2[5]= {1, 2, 3, 4, 5};// initialized array of size 5
    int arr3[] = {6, 7, 8, 9, 10};// size automatically determined by initializer list
    int arr4[5] = {11, 12};// first two elements initialized, rest are zero

    // Accessing array elements
    for(int i = 0; i < (sizeof(arr2)/sizeof(int)); i++) {
        cout << "arr2[" << i << "] = " << arr2[i] << endl;
    }
    return 0;
}