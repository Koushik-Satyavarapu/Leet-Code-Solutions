class Solution {
public:
    void seq(vector<string> &res,vector<pair<int,string>> digi,string digits,int ind,string st){
        if(ind==digits.size()){
            res.push_back(st);
            return;
        }
        for(int i=0;i<digi[digits[ind]-'2'].second.size();i++){
            seq(res,digi,digits,ind+1,st+digi[digits[ind]-'2'].second[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        vector<pair<int,string>> digi={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        vector<string> res;
        string st="";
        seq(res,digi,digits,0,st);
        return res;
    }
};