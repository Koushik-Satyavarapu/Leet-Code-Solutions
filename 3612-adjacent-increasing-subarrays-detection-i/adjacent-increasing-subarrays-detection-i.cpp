class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int prev=0,count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                count++;
            }else{
                prev=count;
                count=1;
            }
            if(count/2>=k || min(count,prev)>=k){
                return true;
            }
        }
        return false;
    }
};