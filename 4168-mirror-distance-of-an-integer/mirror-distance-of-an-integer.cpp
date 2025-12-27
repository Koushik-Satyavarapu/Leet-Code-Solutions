class Solution {
public:
    int mirrorDistance(int n) {
        long long rev=0;
        int temp=n;
        while(temp){
            rev=(rev+(temp%10))*10;
            temp=temp/10;
        }
        rev=rev/10;
        return abs(rev-n);
    }
};