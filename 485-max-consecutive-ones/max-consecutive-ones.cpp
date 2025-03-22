class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0;
        int high=0;
        for(int i:nums){
            if(i==1){
                n++;
            }else{
                high=max(n,high);
                n=0;
            }
        }
        return max(high,n);
    }
};