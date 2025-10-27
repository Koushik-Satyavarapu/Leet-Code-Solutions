class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> store(bank.size(),0);
        for(int i=0;i<bank.size();i++){
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1'){
                    store[i]++;
                }
            }
        }
        int total=0;
        int prev=0;
        for(int i=0;i<store.size();i++){
            total+=store[i]*prev;
            if(store[i]!=0){
                prev=store[i];
            }
        }
        return total;
    }
};