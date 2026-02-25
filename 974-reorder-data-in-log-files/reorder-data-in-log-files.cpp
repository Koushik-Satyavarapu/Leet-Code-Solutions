class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> num;
        vector<string> lett;
        for(int i=0;i<logs.size();i++){
            int space=logs[i].find(' ');
            if(isdigit(logs[i][space+1])){
                num.push_back(logs[i]);
            }else{
                lett.push_back(logs[i]);
            }
        }
        sort(lett.begin(),lett.end(),[](string a,string b){
            auto space1=a.find(' ');
            auto space2=b.find(' ');
            string ident1=a.substr(0,space1);
            string ident2=b.substr(0,space2);
            string rem1=a.substr(space1+1);
            string rem2=b.substr(space2+1);
            if(rem1==rem2){
                return ident1<ident2;
            }else{
                return rem1<rem2;
            }

        });
        vector<string> res;
        res.insert(res.end(),lett.begin(),lett.end());
        res.insert(res.end(),num.begin(),num.end());
        return res;
    }
};