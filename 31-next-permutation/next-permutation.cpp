class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int j=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                j=i-1;
                break;
            }
        }
        if(j==-1){
            reverse(nums.begin(),nums.end());
        }else{
        for(int i=nums.size()-1;i>j;i--){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
                break;
            }
        }
        reverse(nums.begin()+j+1,nums.end());
        }
        return;
    }
};