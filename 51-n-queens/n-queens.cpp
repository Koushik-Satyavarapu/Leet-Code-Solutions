class Solution {
public:
    void printPerm(int n,int col,vector<vector<string>> &res,vector<string> &store,vector<int> &row,vector<int> &crossA,vector<int> &crossB){
        if(col==n){
            res.push_back(store);
            return;
        }
        for(int i=0;i<n;i++){
            if(!row[i] && !crossA[i+col] && !crossB[col+(n-i-1)]){
                row[i]=1;
                crossA[i+col]=1;
                crossB[col+(n-i-1)]=1;
                store[i][col]='Q';
                printPerm(n,col+1,res,store,row,crossA,crossB);
                store[i][col]='.';
                row[i]=0;
                crossA[i+col]=0;
                crossB[col+(n-i-1)]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string st(n,'.');
        vector<vector<string>> res;
        vector<string> store(n);
        for(int i=0;i<n;i++){
            store[i]=st;
        }
        vector<int> row(n,0);
        vector<int> crossA((2*n)-1,0);
        vector<int> crossB((2*n)-1,0);
        printPerm(n,0,res,store,row,crossA,crossB);
        return res;
    }
};