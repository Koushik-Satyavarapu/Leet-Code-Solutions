class Solution {
public:
    void seq(vector<string> &res,vector<string> digi,string digits,int ind,string st){
        if(ind==digits.size()){
            res.push_back(st);
            return;
        }
        for(int i=0;i<digi[digits[ind]-'2'].size();i++){
            seq(res,digi,digits,ind+1,st+digi[digits[ind]-'2'][i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        vector<string> digi={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        string st="";
        seq(res,digi,digits,0,st);
        return res;
    }
};