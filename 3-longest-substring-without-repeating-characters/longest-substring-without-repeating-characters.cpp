class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int maxi=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            while(mp[s[i]]>0){
                mp[s[j]]--;
                j++;
            }
            mp[s[i]]++;
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};