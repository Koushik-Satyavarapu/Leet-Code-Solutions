class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ai=m-1;
        int b=n-1;
        int c=m+n-1;
        while(b>=0){
            if(ai>=0 && nums1[ai]>nums2[b]){
                nums1[c]=nums1[ai];
                ai--;
            }else{
                nums1[c]=nums2[b];
                b--;
            }
            c--;
        }
    }
};