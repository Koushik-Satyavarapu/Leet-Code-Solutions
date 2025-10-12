class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> sind(256,0);
        vector<int> tind(256,0);
        for(int i=0;i<s.size();i++){
            if(sind[s[i]]!=tind[t[i]]){
                return false;
            }
            sind[s[i]]=i+1;
            tind[t[i]]=i+1;
        }
        return true;
    }
};