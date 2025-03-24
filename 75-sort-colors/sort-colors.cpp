class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0,c1=0,c2=0;
        for(int i:nums){
            if(i==0) c0++;
            else if(i==1) c1++;
            else c2++;
        }
        for(int j=0;j<c0;j++){
            nums[j]=0;
        }
        for(int j=c0;j<c0+c1;j++){
            nums[j]=1;
        }
        for(int j=c0+c1;j<c0+c1+c2;j++){
            nums[j]=2;
        }
    }
};