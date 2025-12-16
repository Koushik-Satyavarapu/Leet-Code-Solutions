class Solution {
public:
    bool isPrime(int num){
        if(num<=1) return false;
        for(int i=2;i * i<=num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    bool completePrime(int num) {
        if(!isPrime(num)){
            return false;
        }
        int dup=num;
        int count=0;
        int p=1;
        while(dup){
            count++;
            dup=dup/10;
            p*=10;
        }
        
        int temp=num;
        while(temp){
            if(!isPrime(temp)) return false;
            temp/=10;
        }
        temp=num;
        while(p>1){
            temp=temp%p;
            if(!isPrime(temp)) return false;
            p=p/10;
        }
        return true;
    }
};