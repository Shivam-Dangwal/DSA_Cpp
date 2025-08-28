#include <iostream>
#include <vector>
using namespace std;
 
vector<int> productexceptself(vector<int>& v){
    int n = v.size();
    vector<int> left(n,1);
    vector<int> right(n,1);
    vector<int> ans(n,1);
    
    for(int i=1;i<n;i++){
        left[i] = left[i-1]*v[i-1];
    }
    
    for(int i=n-2;i>=0;i--){
        right[i] = right[i+1]*v[i+1];
    }
    
    for(int i=0;i<n;i++){
        ans[i] = left[i]*right[i];
    }
    
    return ans;
}

int main() {
    vector<int> nums= {1,2,3,4,5,4,3,2,1};
    vector<int> result = productexceptself(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}