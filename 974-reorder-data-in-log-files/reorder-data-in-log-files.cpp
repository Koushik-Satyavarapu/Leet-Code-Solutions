class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        typedef pair<pair<string,string>,int> P;
        priority_queue<P,vector<P>,greater<P>> pq;
        vector<string> res;
        vector<int> indDig;
        for(int i=0;i<logs.size();i++){
            auto space=logs[i].find(' ');
            string ident=logs[i].substr(0,space);
            string rem=logs[i].substr(space+1);
            if(isdigit(rem[0])){
                indDig.push_back(i);
            }else{
                pq.push({{rem,ident},i});
            }
        }
        while(!pq.empty()){
            res.push_back(logs[pq.top().second]);
            pq.pop();
        }
        for(int i=0;i<indDig.size();i++){
            res.push_back(logs[indDig[i]]);
        }
        return res;
    }
};