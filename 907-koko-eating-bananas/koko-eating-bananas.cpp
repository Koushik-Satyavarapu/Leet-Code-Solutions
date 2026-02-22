class Solution {
public:
    bool canEat(vector<int>& piles,int k,int target){
        long count=0;
        for(int i=0;i<piles.size();i++){
            count+=(long)(piles[i]+k-1)/k;
        }
        if(count<=target){
            return true;
        }
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(high-low)/2+low;
            if(canEat(piles,mid,h)){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};