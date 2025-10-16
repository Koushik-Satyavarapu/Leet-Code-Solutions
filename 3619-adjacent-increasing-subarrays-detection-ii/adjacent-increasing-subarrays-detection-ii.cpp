class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int> prev(n,1);
        for(int i=1;i<n;i++){
            if(nums[i-1]<nums[i]){
                prev[i]=prev[i-1]+1;
            }
        }
        int left=1,right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            bool flag=false;
            for(int i=0;i<=n-2*mid;i++){
                if(prev[i+mid-1]>=mid && prev[i+2*mid-1]>=mid){
                    flag=true;
                    break;
                }
            }
            if(flag){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return right;
    }
};