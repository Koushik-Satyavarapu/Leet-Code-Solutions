class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long cnt=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int low=i+1,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[i]+nums[mid]>=lower) high=mid-1;
                else low=mid+1; 
            }
            int leftMost=low;
            low=i+1,high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[i]+nums[mid]<=upper)low=mid+1;
                else high=mid-1;
            }
            int rightMost=high;
            if(leftMost<=rightMost){
                cnt+=(rightMost-leftMost+1);
            }
        }
        return cnt;
    }
};