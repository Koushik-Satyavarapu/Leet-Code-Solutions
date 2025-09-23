class Solution {
public:
    void combPN(unordered_map<char,string> mp,string st,int ind,string digits,vector<string> &res){
        if(ind==digits.size()){
            res.push_back(st);
            return;
        }
        string temp=mp[digits[ind]];
        for(int i=0;i<temp.size();i++){
            st+=temp[i];
            combPN(mp,st,ind+1,digits,res);
            st.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> mp{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
        vector<string> res;
        if(digits.size()==0) return res;
        string st;
        combPN(mp,st,0,digits,res);
        return res;
    }
};