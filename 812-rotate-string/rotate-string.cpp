class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            if(s==goal){
                return true;
            }
            char temp=s[0];
            s.erase(s.begin());
            s+=temp;
        }
        return false;
    }
};