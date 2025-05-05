class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count=0,j=k;
        if(blocks.size()<k){return -1;}
        for(int i=0;i<k;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        int mini=count;
        while(j<blocks.size()){
            if(blocks[j]=='B'&&blocks[j-k]=='W'){
                count--;
            }else if(blocks[j]=='W'&&blocks[j-k]=='B'){
                count++;
            }
            mini=min(count,mini);
            j++;
        }
        return mini;
    }
};