class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n:nums){
            map[n]++;
        }
        int ma=0;
        int x=0;
        for(auto n:map){
            if(n.second>ma){
                ma=n.second;
                x=n.first;
            }
        }
        return x;
    }
};