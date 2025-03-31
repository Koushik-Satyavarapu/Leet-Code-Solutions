class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // Track the lowest price encountered
        int maxProfit = 0;       // Track the maximum profit

        for (int price : prices) {
            minPrice = min(minPrice, price);  // Update min price if we find a lower one
            maxProfit = max(maxProfit, price - minPrice);  // Update max profit
        }

        return maxProfit;
    }
};
