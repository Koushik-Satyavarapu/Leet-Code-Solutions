class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]%value;
            if(nums[i]<0){
                nums[i]+=value;
            }
            mp[nums[i]]++;
        }
        for(int i=0;;i++){
            if(mp.find(i%value)!=mp.end()){
                mp[i%value]--;
                if(mp[i%value]==0){
                    mp.erase(i%value);
                }
            }else{
                return i;
            }
        }
        return 0;
    }
};