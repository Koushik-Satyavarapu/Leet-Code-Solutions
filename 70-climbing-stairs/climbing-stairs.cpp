class Solution {
public:
    int findcount(int n,vector<int> &dp){
        if(n<=2){
            return n;
        }
        if(dp[n]==-1){
            return dp[n]=findcount(n-1,dp)+findcount(n-2,dp);
        }
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return findcount(n,dp);
    }
};