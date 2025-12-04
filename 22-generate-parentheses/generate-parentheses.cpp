class Solution {
public:
    void printpar(vector<string> &res,int n,int l,int r,string st){
        if(l==n && r==n){
            res.push_back(st);
            return;
        }else if(l>n ||r>n){
            return;
        }
        if(l<n){
            printpar(res,n,l+1,r,st+'(');
        }
        if(r<l){
            printpar(res,n,l,r+1,st+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string st="";
        printpar(res,n,0,0,st);
        return res;
    }
};