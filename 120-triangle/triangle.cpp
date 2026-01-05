class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        if(triangle.size()==1) return triangle[0][0];
        for(int i=1;i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                if(j-1<0){
                    triangle[i][j]=triangle[i-1][j]+triangle[i][j];
                }else if(j>=triangle[i].size()-1){
                    triangle[i][j]=triangle[i-1][j-1]+triangle[i][j];
                }else{
                    triangle[i][j]=min(triangle[i-1][j]+triangle[i][j],triangle[i-1][j-1]+triangle[i][j]);
                }
            }
        }
        int mini=INT_MAX;
        for(int i=0;i<triangle[n-1].size();i++){
            mini=min(mini,triangle[n-1][i]);
        }
        return mini;
    }
};