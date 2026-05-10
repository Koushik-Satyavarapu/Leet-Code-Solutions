class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        if(shifts.size()==1){
            char ch=(s[0]-'a'+shifts[0])%26+'a';
            string ans="";
            ans+=ch;
            return ans;
        }
        for(int i=shifts.size()-2;i>=0;i--){
            shifts[i]=(shifts[i+1]+shifts[i])%26;
        }
        string ans="";
        int i=0;
        for(char ch:s){
            ans+=(ch-'a'+shifts[i])%26+'a';
            i++;
        }
        return ans;
    }
};