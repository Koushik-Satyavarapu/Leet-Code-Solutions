class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int pcount=0;
        for(int i=left;i<=right;i++){
            int count=0;
            int setBits=__builtin_popcount(i);
            if(setBits<2) continue;
            for(int j=2;j<=sqrt(setBits);j++){
                if(setBits%j==0){
                    count++;
                }
            }
            if(count==0){
                pcount++;
            }
        }
        return pcount;
    }
};