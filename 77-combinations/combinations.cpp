class Solution {
public:
    void comb(vector<vector<int>> &res,vector<int> arr,int n,int k,int level,int in){
        if(level==k){
            res.push_back(arr);
            return;
        }
        for(int i=in+1;i<=n;i++){
            arr.push_back(i);
            comb(res,arr,n,k,level+1,i);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> arr;
        comb(res,arr,n,k,0,0);
        return res;
    }
};