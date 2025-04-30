class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> mp(mpp.begin(),mpp.end());
        sort(mp.begin(),mp.end());
        int maxi=0;
        for(int i=0;i<mp.size()-1;i++){
            if(mp[i+1].first-mp[i].first==1){
                maxi=max(maxi,mp[i].second+mp[i+1].second);
            }
        }
        return maxi;
    }
};