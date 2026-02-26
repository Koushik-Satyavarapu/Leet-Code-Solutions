class Solution {
public:
    string frequencySort(string s) {
        typedef pair<int,char> P;
        priority_queue<P,vector<P>> pq;
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string res="";
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                res+=pq.top().second;
            }
            pq.pop();
        }
        return res;
    }
};