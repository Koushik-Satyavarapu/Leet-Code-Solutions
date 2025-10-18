class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int prevsum=0;
        int sum=1;
        int maxi=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                sum++;
            }else{
                prevsum=sum;
                sum=1;
            }
            maxi=max({maxi,min(sum,prevsum),sum/2});
        }
        return maxi;
    }
};