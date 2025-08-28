#include<iostream>
#include<vector>
using namespace std;

void bruteForcePairSum(const vector<int>& arr, int target) {
    bool found = false;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "No pairs found with the given sum." << endl;
    }
}

void betterPairSum(const vector<int>& arr, int target) {
    bool found = false;
    for(int i = 0, j= arr.size() - 1;i<j;  ){
        if(arr[i]+arr[j]== target) {
            cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
            i++;
            j--;
            found = true;
        } else if(arr[i] + arr[j] < target) {
            i++;            
        } else {
            j--;        
        }
        
    }
    if(!found) {
        cout << "No pairs found with the given sum." << endl;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int target;
    
    cout << "Enter the target sum: ";
    cin >> target;

    bruteForcePairSum(v,target);
    betterPairSum(v,target);

    return 0;
}