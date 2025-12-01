class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time;
        for(int i=0;i<timePoints.size();i++){
            string hrs="";
            hrs+=timePoints[i][0];
            hrs+=timePoints[i][1];
            string minu="";
            minu+=timePoints[i][3];
            minu+=timePoints[i][4];
            int tim=stoi(hrs)*60;
            tim+=stoi(minu);
            time.push_back(tim);
        }
        int mini=INT_MAX;
        sort(time.begin(),time.end());
        for(int i=0;i<timePoints.size()-1;i++){
            mini=min(mini,time[i+1]-time[i]);
        }
        mini=min(mini,1440+time[0]-time[time.size()-1]);
        return mini;
    }
};