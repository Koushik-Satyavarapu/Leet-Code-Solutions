class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i:arr){
            mpp[i]++;
        }
        vector<int> res;
        for(auto &a:mpp){
            if(find(res.begin(),res.end(),a.second)==res.end()){
                res.push_back(a.second);
            }else{
                return false;
            }
        }
        return true;
    }
};