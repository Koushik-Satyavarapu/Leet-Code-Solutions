class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> res;
        int x;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                x=nums[i];
            }else{
                for(int j=0;j<x;j++){
                    res.push_back(nums[i]);
                }
            }
        }
        return res;
    }
};