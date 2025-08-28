// LEETCODE problem number: 136
// Problem: Single Number
//  logic used: bitwise XOR operation
//  n^n = 0
//  n^0 = n
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num; // XOR operation
    }
    return result;
}

int main()
{

    vector<int> nums({4, 1, 2, 1, 2}); // Example input

    int single = singleNumber(nums);
    cout << "The single number is: " << single << endl;

    return 0;
}