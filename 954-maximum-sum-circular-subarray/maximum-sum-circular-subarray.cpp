class Solution {
public:
    int maxSum(vector<int> nums){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=max(nums[i],sum+nums[i]);
            maxi=max(maxi,sum);
        }
        return maxi;
    }
    int minSum(vector<int> nums){
        int sum=0;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum=min(nums[i],sum+nums[i]);
            mini=min(mini,sum);
        }
        return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        return max(maxSum(nums),sum-minSum(nums))==0?maxSum(nums):max(maxSum(nums),sum-minSum(nums));
    }
};