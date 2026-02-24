class Solution {
public:
    int longestBalanced(string s) {
        int maxi=0;
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);
            for(int j=i;j<s.size();j++){
                int minfreq=1001;
                int maxfreq=0;
                freq[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        minfreq=min(minfreq,freq[k]);
                        maxfreq=max(maxfreq,freq[k]);
                    }
                }
                if(minfreq==maxfreq){
                    maxi=max(maxi,j-i+1);
                }
            }
        }
        return maxi;
    }
};