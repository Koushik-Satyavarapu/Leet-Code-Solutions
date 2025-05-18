class Solution {
public:
    int func(int i,int j,string &a,string &b,vector<vector<int>> &dp){
            if(i<0 || j<0) return 0;
            if(dp[i][j]!=-1)return dp[i][j];
            if(a[i]==b[j]){
                return dp[i][j]=1+func(i-1,j-1,a,b,dp);
            }
                
        return dp[i][j]=0+max(func(i-1,j,a,b,dp),func(i,j-1,a,b,dp));
            
    } 
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return func(n-1,m-1,text1,text2,dp);
    }
};