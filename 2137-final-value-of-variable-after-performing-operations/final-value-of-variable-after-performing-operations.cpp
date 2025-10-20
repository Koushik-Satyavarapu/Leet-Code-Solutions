class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int num=0;
        for(string st:operations){
            if(st[1]=='+'){
                num++;
            }else{
                num--;
            }
        }
        return num;
    }
};