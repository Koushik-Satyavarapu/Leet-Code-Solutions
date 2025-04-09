class Solution {
public:
    bool is_increasing(vector <int> &arr, int curr_n){
        for(int i=1; i<curr_n; i++){
            if(arr[i]<arr[i-1])return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;

        int res = 0;
        int current_size = n;

        // Loop until the array becomes non-decreasing
        while(!is_increasing(nums, current_size)){
            int min_idx = 1;
            int min = nums[0]+nums[1];
            int sum;

            // Find the leftmost adjacent pair with the minimum sum
            for(int i=1; i<current_size; i++){
                sum = nums[i]+nums[i-1];
                if(sum<min){
                    min_idx = i;
                    min = sum;
                }
            }

            // Perform the merge: add the value of the second element to the first
            nums[min_idx-1]+=nums[min_idx];

            // Shift elements to remove the second element of the pair
            for(int j=min_idx; j<(current_size-1); j++){
                nums[j] = nums[j+1];
            } 
            res++; // Increment the operation count
            current_size--; // Decrease the effective size of the array
        }
        return res;
    }
};