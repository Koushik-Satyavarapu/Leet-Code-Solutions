class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string prev="";
        vector<string> res;
        for(string st:words){
            string s=st;
            sort(st.begin(),st.end());
            if(st!=prev){
                res.push_back(s);
                prev=st;
            }
        }
        return res;
    }
};