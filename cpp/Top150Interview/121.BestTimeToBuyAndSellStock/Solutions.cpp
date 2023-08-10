class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int profit = 0;
        int stock = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            if (prices[i] < stock)
                stock = prices[i];

            profit = prices[i] - stock;
            if (profit > max)
                max = profit;
        }
        return max;
    }
};
