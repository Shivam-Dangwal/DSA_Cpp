#include <iostream>
#include <vector>
#include <algorithm> //for sort()
using namespace std;

// O(n^2)
void bruteForceMajorityElement(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < (size / 2) + 1; ++i)
    {
        int count = 0;
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            cout << "Majority Element: " << arr[i] << endl;
            return;
        }
    }
}

// O(nlog n)
void MajorityElementUsingSorting(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int size = arr.size();
    int count = 1;
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            if (count > size / 2)
            {
                cout << "Majority Element: " << arr[i - 1] << endl;
                return;
            }
            count = 1;
        }
    }
    if (count > size / 2)
    {
        cout << "Majority Element: " << arr[size - 1] << endl;
    }
}

void MooresAlgorithm(vector<int> &arr)
{
    int frequency = 0, ans = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (frequency == 0)
        {
            ans = arr[i];
            frequency = 1;
        }
        else if (arr[i] == ans)
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    cout << "Majority Element using Moore's Algorithm: " << ans << endl;
}

int main()
{
    vector<int> v = {1, 1, 3, 1, 3, 1};

    bruteForceMajorityElement(v);
    MajorityElementUsingSorting(v);
    MooresAlgorithm(v);
    return 0;
}