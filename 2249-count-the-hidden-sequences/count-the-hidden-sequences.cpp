class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long sum=0;
        long long mini=0,maxi=0;
        for(int dif:differences){
            sum+=dif;
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        long long start_min=lower-mini;
        long long start_max=upper-maxi;
        long long a=start_max-start_min+1;
        if(a<0){
            return 0;
        }else return a;
    }
};