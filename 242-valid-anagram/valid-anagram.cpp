class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        if(s.size()!=t.size()){return false;}
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1.size()!=mp2.size()){return false;}
        for(auto &i:mp1){
            if(mp2[i.first]!=i.second){
                return false;
            }
        }
        return true;
    }
};