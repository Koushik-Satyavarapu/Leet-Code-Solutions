class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int i:arr){
            mpp[i]++;
        }
        unordered_set<int> freq;
        for(auto &a:mpp){
            freq.insert(a.second);
        }
        return freq.size()==mpp.size();
    }
};