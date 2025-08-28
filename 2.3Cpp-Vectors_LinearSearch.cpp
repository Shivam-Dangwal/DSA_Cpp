#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(vector<int> &vec, int element)
{
    int index = -1, ans= -1;

    for (int val : vec)
    {
        index++;
        val == element ? ans = index : 0;
    }
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element = 5;
    int ans = LinearSearch(vec, element);
    if (ans != -1)
    {
        cout << "Element " << element << " found at index: " << ans << endl;
    }
    else
    {
        cout << "Element " << element << " not found in the vector." << endl;
    }
    return 0;
}