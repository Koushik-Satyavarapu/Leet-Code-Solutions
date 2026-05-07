class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diff(nums.size()+1,0);
        for(int i=0;i<queries.size();i++){
            int a=queries[i][0];
            int b=queries[i][1];
            diff[a]++;
            diff[b+1]--;
        }
        for(int i=0;i<nums.size();i++){
            if(i!=0) diff[i]=diff[i]+diff[i-1];
            nums[i]-=(diff[i]);
            if(nums[i]>0) return false;
        }
        return true;
        
    }
};