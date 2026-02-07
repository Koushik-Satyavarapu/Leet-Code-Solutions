class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[j] && count==0){
                count++;
                j++;
                nums[j]=nums[i];
            }else if(nums[i]!=nums[j]){
                count=0;
                j++;
                nums[j]=nums[i];
            }
        }
        return j+1;
    }
};