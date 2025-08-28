#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &vec, int size)
{
    int temp;
    for (int i = 0; i < size / 2; ++i)
    {
        temp = vec[i];
        vec[i] = vec[size - i - 1];
        vec[size - i - 1] = temp;
    }
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // Display original vector
    cout << "Original vector: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // Reverse the vector
    reverse(vec, vec.size());

    // Display reversed vector
    cout << "Reversed vector: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}