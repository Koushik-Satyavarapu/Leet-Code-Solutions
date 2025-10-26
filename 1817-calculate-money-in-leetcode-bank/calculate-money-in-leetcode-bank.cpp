class Solution {
public:
    int totalMoney(int n) {
        int value=n/7;
        int sum=0;
        for(int i=0;i<value;i++){
            sum+=(7*8)/2;
            sum+=i*7;
        }
        int rem=n%7;
        sum+=(rem*(rem+1))/2;
        sum+=value*rem;
        return sum;
    }
};