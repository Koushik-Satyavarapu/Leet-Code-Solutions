class NumArray {
public:
    vector<int> res;
    NumArray(vector<int>& nums) {
        
        res.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            res.push_back(res[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return res[right];
        }
        return res[right]-res[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */