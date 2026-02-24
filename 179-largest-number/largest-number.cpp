class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> st;
        for(int n:nums){
            st.push_back(to_string(n));
        }
        sort(st.begin(),st.end(),[](string &a,string &b){
            return a+b>b+a;  
        });
        string res="";
        if(st[0]=="0"){
            return "0";
        }
        for(string s:st){
            res+=s;
        }
        return res;
    }
};