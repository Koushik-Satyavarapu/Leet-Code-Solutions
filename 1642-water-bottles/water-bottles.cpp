class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int count=numBottles;
        int rem=0;
        while(numBottles){
            numBottles+=rem;
            count+=numBottles/numExchange;
            rem=numBottles%numExchange;
            numBottles=numBottles/numExchange;
        }
        return count;
    }
};