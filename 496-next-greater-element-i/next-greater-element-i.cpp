class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i:nums1){
            int x;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==i){
                    x=j;
                    break;
                }
            }
            int flag=1;
            for(int k=x+1;k<nums2.size();k++){
                if(nums2[k]>nums2[x]){
                    res.push_back(nums2[k]);
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                res.push_back(-1);
            }
        }
        return res;
    }
};