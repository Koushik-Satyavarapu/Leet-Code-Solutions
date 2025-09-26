class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            nums[i]=(nums[i]%2==0)?0:1;
        }
        unordered_map<int,int> mp;
        mp[0]++;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum-k;
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[sum]++;
        }
        return count;
    }
};