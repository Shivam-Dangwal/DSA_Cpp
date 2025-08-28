#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices){
    int MaxProfit = 0;
    int bestbuy = prices[0];

    for (int i=1; i < prices.size(); i++){
        if (prices[i] > bestbuy){
            MaxProfit = max(prices[i]-bestbuy,MaxProfit);    
        } bestbuy = min(bestbuy, prices[i]);
    }
    return MaxProfit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = maxProfit(prices); 
    cout << "Maximum profit: " << profit << endl;

    return 0;
}