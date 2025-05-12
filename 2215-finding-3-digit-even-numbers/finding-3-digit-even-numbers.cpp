class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i:digits){
            mpp[i]++;
        }

        for(int i=1;i<=9;i++){
            if(mpp[i]==0) continue;
            mpp[i]--;
            for(int j=0;j<=9;j++){
                if(mpp[j]==0)continue;
                mpp[j]--;
                for(int k=0;k<=8;k+=2){
                    if(mpp[k]==0) continue;
                    res.push_back(i*100+j*10+k);
                }
                mpp[j]++;
            }
            mpp[i]++;
        }
        return res;
    }
};