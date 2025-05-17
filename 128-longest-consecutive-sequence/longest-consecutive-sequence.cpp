class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0;
        int count=0;
        unordered_set<int> us(nums.begin(),nums.end());
        for(int i:us){
            if(us.count(i-1)==0){
                int current=i;
                count=1;
                while(us.count(current+1)==1){
                    count++;
                    current++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};