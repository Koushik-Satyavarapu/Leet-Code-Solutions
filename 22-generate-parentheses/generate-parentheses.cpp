class Solution {
public:
    void printpar(set<string> &res,int n,int l,int r,string st){
        if(l==n && r==n){
            res.insert(st);
            return;
        }else if(l>n ||r>n){
            return;
        }
        if(l==0){
            printpar(res,n,l+1,r,st+'(');
        }
        if(l>r && l<n){
            printpar(res,n,l+1,r,st+'(');
            printpar(res,n,l,r+1,st+')');
        }else if(l==r && l<n){
            printpar(res,n,l+1,r,st+'(');
        }else if(r<n){
            printpar(res,n,l,r+1,st+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        set<string> res;
        string st="";
        printpar(res,n,0,0,st);
        vector<string> resi(res.begin(),res.end());
        return resi;
    }
};