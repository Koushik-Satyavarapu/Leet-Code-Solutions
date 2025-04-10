class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        for(int i=0;i<numRows;i++){
            vec.push_back(vector<int>());
            for(int j=0;j<i+1;j++){
                if(j==0 || j==i){
                    vec[i].push_back(1);
                }else{
                    int x=vec[i-1][j-1]+vec[i-1][j];
                    vec[i].push_back(x);
                }
            }
        }
        return vec;
    }
};