class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int x;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                x=nums[i];
                cnt=1;
            }
            else if(nums[i]==x){
                cnt++;
            }else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i:nums){
            if(i==x){
                cnt1++;
            }
        }
        if(cnt1>nums.size()/2){
            return x;
        }
        return -1;
    }
};