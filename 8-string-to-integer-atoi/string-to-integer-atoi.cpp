class Solution {
public:
    int myAtoi(string s) {
        bool negflag=false;
        bool started=true;
        long num=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-' && started){
                negflag=true;
                started=false;
            }else if(s[i]=='+' && started){
                started=false;
                continue;
            }else if(s[i]==' ' && started){
                continue;
            }else if(s[i]>='0' && s[i]<='9'){
                num=num*10+(s[i]-'0');
                if(num>=INT_MAX && !negflag) return INT_MAX;
                if(-num<=INT_MIN) return INT_MIN;
                started=false;
            }else{
                break;
            }
        }
        return (negflag)?-num:num;
    }
};