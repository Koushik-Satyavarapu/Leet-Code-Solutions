class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            string str=to_string(i);
            if(str.size()%2==0){
                int temp1=0;
                int temp2=0;
                for(int i=0;i<str.size()/2;i++){
                    temp1+=str[i];
                    temp2+=str[str.size()-i-1];
                }
                if(temp1==temp2){
                cnt++;
            }
            }
            
        }
        return cnt;
    }
};