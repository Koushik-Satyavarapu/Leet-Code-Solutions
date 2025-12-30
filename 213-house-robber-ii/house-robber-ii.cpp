class Solution {
public:
    int fun(vector<int> nums){
        vector<int> dp(nums.size(),-1);
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            if(i==2){
                dp[i]=nums[i]+dp[i-2];
            }else{
                dp[i]=max(nums[i]+dp[i-2],nums[i]+dp[i-3]);
            }
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=nums.size()-1)temp2.push_back(nums[i]);
        }
        return max(fun(temp1),fun(temp2));
    }
};