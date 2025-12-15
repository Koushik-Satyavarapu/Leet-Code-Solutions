class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN;
        int i=0,j=height.size()-1;
        maxi=max(maxi,(min(height[i],height[j]))*(j-i));
        while(i<j){
            if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
            maxi=max(maxi,(min(height[i],height[j]))*(j-i));
        }
        return maxi;
    }
};