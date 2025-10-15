class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        vector<int> prev(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                prev[i]=prev[i-1]+1;
            }
        }
        for(int i=0;i<=prev.size()-2*k;i++){
            if(prev[i+k-1]>=k && prev[i+2*k-1]>=k){
                return true;
            }
        }
        return false;
    }
};