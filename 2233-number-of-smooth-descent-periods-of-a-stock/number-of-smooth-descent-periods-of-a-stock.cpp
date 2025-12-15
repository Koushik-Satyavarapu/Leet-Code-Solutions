class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long cnt=1;
        long long total=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]-prices[i+1]==1){
                cnt++;
            }else{
                total+=(cnt*(cnt+1))/2;
                cnt=1;
            }
        }
        total+=(cnt*(cnt+1))/2;
        return total;
    }
};