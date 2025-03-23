class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> unique;
        int sum=0;
        int usum=0;
        for(int n:nums){
            if(unique.find(n)==unique.end()){
                usum+=n;
                unique.insert(n);
            }
            sum+=n;
        }
        return 2*usum - sum;
    }
};