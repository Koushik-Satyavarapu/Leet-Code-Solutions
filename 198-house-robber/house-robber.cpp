class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        dp[0]=nums[0];
        dp[1]=nums[1];
        for(int i=2;i<nums.size();i++){
            if(i-2>=0){
                dp[i]=max(dp[i],nums[i]+dp[i-2]);
            }
            if(i-3>=0){
                dp[i]=max(dp[i],nums[i]+dp[i-3]);
            }
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};