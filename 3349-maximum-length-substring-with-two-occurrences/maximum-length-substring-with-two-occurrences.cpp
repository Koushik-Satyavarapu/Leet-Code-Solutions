class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> mpp;
        int maxi=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
            while(mpp[s[i]]>2){
                mpp[s[j]]--;
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};