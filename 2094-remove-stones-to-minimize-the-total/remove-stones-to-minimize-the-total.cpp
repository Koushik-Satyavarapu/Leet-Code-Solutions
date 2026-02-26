class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int,vector<int>> pq;
        for(int p:piles){
            pq.push(p);
        }
        for(int i=0;i<k;i++){
            int num=pq.top();
            pq.pop();
            num=num-floor(num/2);
            pq.push(num);
        }
        int sum=0;
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};