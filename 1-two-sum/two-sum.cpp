class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }
        // return res;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        vector<int> re;
        int rem;
        for(int i=0;i<nums.size();i++){
            rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                if(i==mp[rem]){
                    continue;
                }
                re.push_back(i);
                re.push_back(mp[rem]);
                break;
            }
        }
        return re;
    }
};