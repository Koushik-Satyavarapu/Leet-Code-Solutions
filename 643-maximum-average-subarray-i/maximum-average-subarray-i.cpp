class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double average=0.0;
        double maxi=INT_MIN;
        int j=0;
        int count=0;
        int i=0;
        while(i<nums.size()){
            if(count==k){
                maxi=max(maxi,sum);
                sum=sum+nums[i]-nums[i-k];
                i++;
            }else{
                sum+=nums[i];
                i++;
                count++;
            }
        }
        if(count==k){
            maxi=max(maxi,sum);
        }
        average=maxi/k;
        return average;
    }
};