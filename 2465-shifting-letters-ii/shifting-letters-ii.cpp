class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> shift(s.size()+1,0);
        for(auto i:shifts){
            int a=i[0];
            int b=i[1];
            int c=i[2];
            if(c==0){
                shift[a]--;
                shift[b+1]++;
            }else{
                shift[a]++;
                shift[b+1]--;
            }
        }
        string st="";
        for(int i=0;i<s.size();i++){
            if(i==0) shift[i]=shift[i]%26;
            if(i!=0) shift[i]=(shift[i]+shift[i-1])%26;
            char ch=(s[i]-'a'+shift[i]+26)%26+'a';
            st+=ch;
        }
        return st;
    }
};