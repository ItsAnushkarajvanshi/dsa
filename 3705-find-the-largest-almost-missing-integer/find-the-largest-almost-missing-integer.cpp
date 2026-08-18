class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>p=nums;
        sort(p.begin(),p.end());
       unordered_map<int,int>mp;
       for(int x:nums){
        mp[x]++;
       }
       int ans=-1;
       if(k==n){
        return p[n-1];
       }
       else if(k==1){
        for(auto& [val,count]:mp){
            if(count==1){
                ans=max(ans,val);
            }
        }
       }
       else{
        int a=nums[0];
        int b=nums[n-1];
        if(mp[a]==1) ans=max(ans,a);
        if(mp[b]==1) ans=max(ans,b);
       }
       return ans;
    }       
};