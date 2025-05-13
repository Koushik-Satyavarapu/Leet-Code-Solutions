class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int x=INT_MAX;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                x=min(x,prices[i]+prices[j]);
            }
        }
        if(x>money){
            return money;
        }else{
            return money-x;
        }
    }
};