class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int right=nums.size()-1;
        int left=0;
        int x,y;
        while(left<=right){
            int mid=(left+right)/2;
            x=mid;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        if(nums[x]>target){
            return x;
        }else{
            return x+1;
        }
    }
};