class Solution {
public:
    bool isprime(int setBits){
        if(setBits<2) return false;
        for(int j=2;j<=sqrt(setBits);j++){
            if(setBits%j==0){
                return false;
            }
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int pcount=0;
        for(int i=left;i<=right;i++){
            int count=0;
            int setBits=__builtin_popcount(i);
            
            if(isprime(setBits)){
                pcount++;
            }
        }
        return pcount;
    }
};