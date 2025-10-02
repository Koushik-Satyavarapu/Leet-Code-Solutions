class Solution {
public:
    bool isSafe(int row,int col,int n,vector<string> store){
        int i=col;
        while(i>=0){
            if(store[row][i]=='Q') return false;
            i--;
        }
        int j=row,k=col;
        while(j>=0 && k>=0){
            if(store[j][k]=='Q') return false;
            j--;
            k--;
        }
        i=row,k=col;
        while(k>=0 && i<n){
            if(store[i][k]=='Q') return false;
            i++;
            k--;
        }
        return true;
    }
    void check(vector<vector<string>> &res,int n,int col,vector<string> store){
        if(col==n){
            res.push_back(store);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(i,col,n,store)){
                store[i][col]='Q';
                check(res,n,col+1,store);
                store[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> store(n);
        string st(n,'.');
        for(int i=0;i<n;i++){
            store[i]=st;
        }
        check(res,n,0,store);
        return res;
    }
};