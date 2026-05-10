class Solution {
public:
    string reorganizeString(string s) {
        string st="";
        vector<int> res(26,0);
        for(char ch:s){
            res[ch-'a']++;
        }
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<26;i++){
            if(res[i]>0){
                pq.push({res[i],i+'a'});
            }
        }
        while(!pq.empty()){
            vector<pair<char,int>> temp;
            for(int i=0;i<2;i++){
                
                if(pq.empty()) break;
                int size=pq.top().first-1;
                char cha=(pq.top().second);
                st+=cha;
                temp.push_back({cha,size});
                pq.pop();
            }
            
            for(auto i:temp){
                if(i.second>0){
                    pq.push({i.second,i.first});
                }
            }
        }
        for(int i=1;i<st.size();i++){
            if(st[i]==st[i-1]) return "";
        }
        return st;
        
    }
};