class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> y(nums.end()-k,nums.end());
        for(int i=0;i<n-k;i++){
            y.push_back(nums[i]);
        }
        nums.clear();
        nums=y;
    }
};