class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,0);
        int pos=0;
        int neg=1;
        for(int i:nums){
            if(i>0){
                res[pos]=i;
                pos=pos+2;
            }else{
                res[neg]=i;
                neg=neg+2;
            }
        }
        return res;
    }
};