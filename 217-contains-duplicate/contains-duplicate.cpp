class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us(nums.begin(),nums.end());
        return nums.size()>us.size();
    }
};