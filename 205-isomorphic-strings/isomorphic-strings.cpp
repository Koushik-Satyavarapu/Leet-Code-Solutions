class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> rep;
        unordered_map<char,bool> ch;
        for(int i=0;i<t.size();i++){
            if(rep.find(s[i])!=rep.end()){
                if(rep[s[i]]!=t[i]){
                    return false;
                }
            }else if(ch.find(t[i])!=ch.end()){
                return false;
            }
            rep[s[i]]=t[i];
            ch[t[i]]=true;
        }
        return true;
    }
};