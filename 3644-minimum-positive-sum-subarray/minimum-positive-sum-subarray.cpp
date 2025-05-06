class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        int sum=0;
        bool found=false;
        for(int len=l;len<=r;len++){
            if(len>nums.size()){
                break;
            }
            sum=0;
            for(int i=0;i<len;i++){
                sum+=nums[i];
            }
            if(sum>0){
                mini=min(mini,sum);
                found=true;
            }
            for(int i=len;i<nums.size();i++){
                sum+=nums[i]-nums[i-len];
                if(sum>0){
                    mini=min(mini,sum);
                    found=true;
                }
            }
        }
        if(found==false){
            return -1;
        }
        return mini;
    }
};