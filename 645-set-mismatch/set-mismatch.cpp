class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
    unordered_set<int> seen;
    int duplicate = -1, actual_sum = 0;

    for (int num : nums) {
        if (seen.count(num)) {
            duplicate = num;
        }
        seen.insert(num);
        actual_sum += num;
    }

    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - (actual_sum - duplicate);

    return {duplicate, missing};
    }
};