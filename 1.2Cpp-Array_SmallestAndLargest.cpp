#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for(int i=0; i < size; i++){
        cout << "Enter the value [index " << i << "]: ";    
        cin >> arr[i];
    }
    int smallest = INT_MAX, index_smallest = 0, largest = INT_MIN, index_largest = 0;

    for(int i=0; i<size ; i++){
        arr[i]<smallest ? index_smallest = i : index_smallest ; 
        smallest = min(smallest, arr[i]);
        arr[i]>largest ? index_largest = i : index_largest ; 
        largest = max(largest, arr[i]);
    }
    cout << "Smallest element: " << smallest << " at index: " << index_smallest <<endl;
    cout << "Largest element: " << largest << " at index: " << index_largest <<endl; 
    return 0;
}