class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        int ind=0;
        if(numRows==1) return s;
        while(ind<s.size()){
            ans+=s[ind];
            ind+=2*numRows-2;
        }
        for(int i=1;i<numRows-1;i++){
            ind=i;
            while(ind<s.size()){
                ans+=s[ind];
                int dia=ind+2*numRows-2-2*i;
                if(dia<s.size()){
                    ans+=s[dia];
                }
                ind+=2*numRows-2;
            }
        }
        ind=numRows-1;
        while(ind<s.size()){
            ans+=s[ind];
            ind+=2*numRows-2;
        }
        return ans;
    }
};