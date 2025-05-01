class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double add=0;
        for(int i=0;i<k;i++){
            add+=nums[i];
        }
        double maxi=add;
        for(int i=k;i<nums.size();i++){
            add+=nums[i]-nums[i-k];
            maxi=max(maxi,add);
        }
        double average=maxi/k;
        return average;
    }
};