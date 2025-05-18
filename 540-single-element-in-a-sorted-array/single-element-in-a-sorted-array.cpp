class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if(nums.size()==1) return nums[0];
        while(low<=high){
            int mid=(high+low)/2;
            if(mid==0){
                if(nums[mid]!=nums[mid+1]) return nums[mid]; 
                else low=mid+1;
                continue;
            }
            else if(mid==nums.size()-1){
                if(nums[mid]!=nums[mid-1]) return nums[mid];
                else high=mid-1;
                continue;
            }
            if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                return nums[mid];
            }else if(nums[mid]==nums[mid-1] && mid%2==1){
                low=mid+1;
            }else if(nums[mid]==nums[mid-1] && mid%2==0){
                high=mid-1;
            }else if(nums[mid]==nums[mid+1] && mid%2==1){
                high=mid-1;
            }else if(nums[mid]==nums[mid+1] && mid%2==0){
                low=mid+1;
            }
        }
        return -1;
    }
};