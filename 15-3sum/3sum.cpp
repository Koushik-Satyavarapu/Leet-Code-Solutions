class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        if(mp[0]==nums.size()){
            return {{0,0,0}};
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                mp[nums[i]]--;
                mp[nums[j]]--;
                if(mp[-(nums[i]+nums[j])]!=0){
                    vector<int> temp={nums[i],nums[j],-(nums[i]+nums[j])};
                    sort(temp.begin(),temp.end());
                    res.insert(temp);
                }
                mp[nums[i]]++;
                mp[nums[j]]++;
            }
        }
        vector<vector<int>> resu(res.begin(),res.end());
        return resu;
    }
};