class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum=nums[0];
        int mini=nums[0];
        int globalMin=nums[0];
        int maxi=nums[0];
        int globalMax=nums[0];
        for(int i=1;i<nums.size();i++){
            totalSum+=nums[i];
            mini=min(mini+nums[i],nums[i]);
            globalMin=min(globalMin,mini);
            maxi=max(maxi+nums[i],nums[i]);
            globalMax=max(globalMax,maxi);
        }
        if(totalSum-globalMin==0){
            return globalMax;
        }
        return max(totalSum-globalMin,globalMax);
    }
};