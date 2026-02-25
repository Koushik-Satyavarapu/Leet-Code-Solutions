class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        stack<char> st;
        vector<int> visit(26,0);
        for(char ch:s){
            mp[ch]--;
            if(visit[ch-'a']==0){
                while(!st.empty() &&st.top()>ch && mp[st.top()]>0){
                    visit[st.top()-'a']=0;
                    st.pop();
                }
                st.push(ch);
                visit[ch-'a']=1;
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};