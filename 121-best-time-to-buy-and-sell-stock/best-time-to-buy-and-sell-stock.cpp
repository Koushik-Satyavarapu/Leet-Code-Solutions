class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int maxi=prices[prices.size()-1];
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]<maxi){
                profit=max(profit,maxi-prices[i]);
            }else{
                maxi=prices[i];
            }
        }
        return profit;
    }
};