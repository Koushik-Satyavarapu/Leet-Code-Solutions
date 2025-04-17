class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int a=-1,b=-1;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(a==-1 && b==-1){
                    a=i;
                }else if(b==-1){
                    b=i;
                    mini=min(mini,b-a);
                }
                else{
                    swap(a,b);
                    b=i;
                    mini=min(mini,b-a);
                }
            }
        }
        if(mini>k){
            return true;
        }
        return false;
    }
};