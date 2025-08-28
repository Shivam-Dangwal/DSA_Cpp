/*
SubArrays are contiguous parts of an array.
The largest subarray sum problem is to find the maximum sum of a contiguous subarray within a given one-dimensional array of numbers.
*/

#include<iostream>
#include<vector>
using namespace std;

int BruteForce(const vector<int>& arr) {
    int maxSum = arr[0];
    int n = arr.size();

    for(int i = 0; i < n; ++i) {
        int currentSum = 0;
        for(int j = i; j < n; ++j) {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }
    return maxSum;
}

int KadaneAlgorithm(const vector<int>& arr) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int val : arr) {
        currentSum = max(val, currentSum + val);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    vector<int> vec = {1, 2, -3, 4, 5};

    cout << "Brute Force Max Subarray Sum: " << BruteForce(vec) << endl;
    cout << "Kadane's Algorithm Max Subarray Sum: " << KadaneAlgorithm(vec) << endl;

    return 0;
}   