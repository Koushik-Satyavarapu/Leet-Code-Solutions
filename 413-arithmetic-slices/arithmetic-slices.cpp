class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<=2){return 0;}
        vector<int> diff(nums.size()-1,0);
        int res=0;
        for(int i=0;i<diff.size();i++){
            diff[i]=nums[i+1]-nums[i];
        }
        int count=0;
        for(int i=0;i<diff.size()-1;i++){
            if(diff[i]==diff[i+1]){
                count++;
            }
            else{
                res+=(count*(count+1))/2;
                count=0;
            }
        }
        res+=(count*(count+1))/2;
        return res;
    }
};