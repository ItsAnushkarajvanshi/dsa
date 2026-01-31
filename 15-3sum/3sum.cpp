class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
       int s=0;
       int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        if(i>0&&nums[i]==nums[i-1])continue;
        while(l<r){
            s=nums[i]+nums[l]+nums[r];
            if(s==0){
                ans.push_back({nums[i],nums[l],nums[r]});
                 while(l<r && nums[l]==nums[l+1])l++;
                 while(l<r && nums[r]==nums[r-1])r--;
                 l++;
                 r--;
            }else if(s<0){
                l++;
            }
            else r--;
        }
       } 
       return ans;
    }
};