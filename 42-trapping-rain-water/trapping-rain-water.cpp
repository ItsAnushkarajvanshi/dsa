class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(n==0) return 0;
        vector<int>lmax;
        int max_left=-1;
        int max_right=-1;
        int block=0;
        for(int i=0;i<n;i++){
            lmax.push_back(max_left);
            max_left=max(max_left,height[i]);
        }
        for(int i=n-1;i>=0;i--){
            lmax[i]=min(max_right,lmax[i]);
            max_right=max(max_right,height[i]);
        }
        for(int i=0;i<n;i++){
            if(lmax[i]==-1)continue;
            if(lmax[i]-height[i]>=0){
                block=block+lmax[i]-height[i];
            }
        }
        return block;
    }
};