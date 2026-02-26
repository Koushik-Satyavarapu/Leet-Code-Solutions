class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        unordered_map<int,int> freq;
        for(int i:hand){
            freq[i]++;
        }
        priority_queue<int,vector<int>,greater<int>> minHeap;
        for(auto it:freq){
            minHeap.push(it.first);
        }
        while(!minHeap.empty()){
            int num=minHeap.top();
            for(int i=0;i<groupSize;i++){
                if(freq[num+i]==0){
                    return false;
                }
                freq[num+i]--;
                if(freq[num+i]==0){
                    if(num+i!=minHeap.top()) return false;
                    minHeap.pop();
                }
            }
        }
        return true;
    }
};