#include <iostream>
#include <vector>
using namespace std;
    

int main()
{

    vector <int> vec = {1,2,3,4,5};

    // for each loop, used to traverse the vector
    for(int val : vec){
        cout << val << " ";
    }

    // vector functions:
    cout << "size = " << vec.size() << endl; // size of the vector
    vec.push_back(6); // add an element to the end of the vector
    cout << "After push_back(6), size = " << vec.size() << "and the element is "<< vec[5]<< endl;
    vec.pop_back(); // remove the last element from the vector
    cout << "After pop_back(), size = " << vec.size() << endl;
    cout << "The first element is " << vec.front() << endl; // first element
    cout << "The last element is " << vec.back() << endl; // last element
    // vec.at(2) returns the element at index 2
    // vec.clear() removes all elements from the vector
    cout << "The capacity of the vector is " << vec.capacity() << endl; // capacity of the vector
    return 0;
}