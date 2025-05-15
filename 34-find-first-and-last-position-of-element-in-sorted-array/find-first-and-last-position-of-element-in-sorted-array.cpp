class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int x=-1;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target){
                x=mid;
                break;
            }else if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        int least=x;
        int top=x;
        vector<int> res;
        if(nums.size()==1 && nums[0]==target){
            res.push_back(0);
            res.push_back(0);
            return res;    
        }
        if(x==-1){
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }else{
            int j=x-1;
            while(j>=0 && nums[x]==nums[j]){
                least=j;
                j--;
            }
            int k=x+1;
            while(k<nums.size() && nums[x]==nums[k]){
                top=k;
                k++;
            }
            res.push_back(least);
            res.push_back(top);
            return res;
        }
    }
};