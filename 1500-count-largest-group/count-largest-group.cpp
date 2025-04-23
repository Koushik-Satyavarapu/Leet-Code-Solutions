class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int> res;
        for(int i=1;i<=n;i++){
            int sum=0;
            int temp=i;
            while(temp!=0){
                sum+=temp%10;
                temp=temp/10;
            }
            res[sum]++;
        }
        int maxFreq=0;
        for(auto &i:res){
            maxFreq=max(maxFreq,i.second);
        }
        int x=0;
        for(auto &i:res){
            if(maxFreq==i.second){
                x++;
            }
        }
        return x;
    }
};