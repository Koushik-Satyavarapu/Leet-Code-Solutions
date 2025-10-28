class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int curr=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(sum-curr==curr){
                    count+=2;
                }else if(abs(sum-curr-curr)==1){
                    count++;
                }
            }
            curr+=nums[i];
        }
        return count;
    }
};