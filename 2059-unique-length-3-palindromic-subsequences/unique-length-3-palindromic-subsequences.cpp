class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26,-1);
        vector<int> last(26,-1);
        int count=0;
        for(int i=0;i<s.size();i++){
            if(first[s[i]-'a']==-1){
                first[s[i]-'a']=i;
            }
            last[s[i]-'a']=i;
        }
        for(int i=0;i<26;i++){
            if(first[i]!=-1 && first[i]!=last[i]){
                unordered_set<char> mp;
                for(int j=first[i]+1;j<last[i];j++){
                    mp.insert(s[j]);
                }
                count+=mp.size();
            }
        }
        return count;
    }
};