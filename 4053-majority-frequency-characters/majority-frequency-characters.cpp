class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        unordered_map<int,string> mp;
        for(auto [x,y]:freq){
            mp[y]+=x;
        }
        int grpsiz=0;
        int dist=0;
        string str;
        for(auto [x,y]:mp){
            if(y.size()>grpsiz){
                grpsiz=y.size();
                dist=x;
                str=y;
            }else if(y.size()==grpsiz && dist<x){
                grpsiz=y.size();
                dist=x;
                str=y;
            }
        }
        
        return str;
    }
};