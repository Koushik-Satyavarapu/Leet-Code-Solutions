class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int res=0;
        unordered_map<int,int> mpp;
        for(int ans:answers){
            mpp[ans]++;
        }
        for(auto it:mpp){
            int numSize=it.first+1;
            int count=it.second;
            int num;
            if(count % numSize!=0){
                num=(count/numSize)+1;
            }else{
                num=(count/numSize);
            }
            res+=num*(numSize);
        }
        return res;
    }
};