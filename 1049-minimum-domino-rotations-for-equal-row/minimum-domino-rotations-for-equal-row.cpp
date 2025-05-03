class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        for(int i=0;i<tops.size();i++){
            mp1[tops[i]]++;
            mp2[bottoms[i]]++;
        }
        int x=-1;
        
        for(int i=1;i<=6;i++){

            if(mp1[i]+mp2[i]>=tops.size()){
                x=i;
            }
        }
        int count1=0,count2=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=x){
                if(bottoms[i]!=x){
                    return -1;
                }
                count1++;
            }
        }
        for(int i=0;i<tops.size();i++){
            if(bottoms[i]!=x){
                if(tops[i]!=x){
                    return -1;
                }
                count2++;
            }
        }
        if(count1>count2){
            return count2;
        }else{
            return count1;
        }
    }
};