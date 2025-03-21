class Solution {
public:
    bool isSubstringPresent(string s) {
        string a=s;
        reverse(a.begin(),a.end());
        for(int i=0;i<s.size()-1;i++){
            string su=s.substr(i,2);
            if(a.contains(su)){
                return true;
            }
        }
        return false;
    }
};