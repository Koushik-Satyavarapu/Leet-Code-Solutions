class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i: nums){
            map[i]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(map[a]==map[b]){
                return a>b;
            }
            return map[a]<map[b];
        });
        return nums;
    }
};