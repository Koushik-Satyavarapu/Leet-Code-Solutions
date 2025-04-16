class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int maxi=0;
        int m=nums[0].size();
        int x=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j || j==nums.size()-i-1){
                    if(nums[i][j]<2){
                        continue;
                    }
                    x=0;
                    for(int k=2;k<=sqrt(nums[i][j]);k++){
                        if(nums[i][j]%k==0){
                            x=1;
                            break;
                        }
                    }if(x==0){
                        maxi=max(maxi,nums[i][j]);
                    }
                }
            }
        }
        
        return maxi;
    }
};