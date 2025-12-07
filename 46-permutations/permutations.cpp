class Solution {
public:
    void perm(vector<int> nums,vector<bool> used,int inc,vector<vector<int>> &res,vector<int> set){
        if(inc==nums.size()){
            res.push_back(set);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!used[i]){
                used[i]=true;
                set.push_back(nums[i]);
                perm(nums,used,inc+1,res,set);
                set.pop_back();
                used[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> used(nums.size(),false);
        vector<vector<int>> res;
        vector<int> set;
        perm(nums,used,0,res,set);
        return res;
    }
};