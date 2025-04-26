class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i+=2){
            int count=nums[i],num=nums[i+1];
            res.insert(res.end(),count,num);
        }
        return res;
    }
};