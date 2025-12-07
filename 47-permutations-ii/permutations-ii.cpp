class Solution {
public:
    void perm(vector<int> nums,vector<vector<int>> &res,vector<bool> used,int inc,vector<int> arr){
        if(inc==nums.size()){
            res.push_back(arr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!used[i]){
                if(i>0 && nums[i]==nums[i-1] && used[i-1]==false){
                    continue;
                }
                used[i]=true;
                arr.push_back(nums[i]);
                perm(nums,res,used,inc+1,arr);
                used[i]=false;
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<bool> used(nums.size(),false);
        vector<int> arr;
        perm(nums,res,used,0,arr);
        return res;
    }
};