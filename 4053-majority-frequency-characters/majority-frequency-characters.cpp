class Solution {
public:
    string majorityFrequencyGroup(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        unordered_map<int,vector<char>> mp;
        for(auto it:freq){
            mp[it.second].push_back(it.first);
        }
        int grpsiz=0;
        int dist=0;
        for(auto it:mp){
            if(it.second.size()>grpsiz){
                grpsiz=it.second.size();
                dist=it.first;
            }else if(it.second.size()==grpsiz && dist<it.first){
                grpsiz=it.second.size();
                dist=it.first;
            }
        }
        string str;
        for(auto it:mp){
            if(it.second.size()==grpsiz && it.first==dist){
                for(char ch:it.second){
                    str+=ch;
                }
            }
        }
        return str;
    }
};