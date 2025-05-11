class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ind=events[0][0];
        int maxi=events[0][1];
        for(int i=1;i<events.size();i++){
            int diff=events[i][1]-events[i-1][1];
            if(diff==maxi){
                ind=min(ind,events[i][0]);
            }else{
                if(maxi<diff){
                    maxi=diff;
                    ind=events[i][0];
                }
            }
        }
        return ind;
    }
};