class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int minlen=INT_MAX;
        int j=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(target<sum){
                minlen=min(minlen,i-j+1);
                sum-=nums[j];
                j++;
            }
            if(target==sum){
                minlen=min(minlen,i-j+1);
            }
            
        }
        return minlen==INT_MAX?0:minlen;
    }
};