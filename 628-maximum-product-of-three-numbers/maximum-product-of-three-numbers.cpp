class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       int ans;
       sort(nums.begin(),nums.end(),greater<int>());
       ans=nums[0]*nums[1]*nums[2];
       ans=max(nums.back()*nums[nums.size()-2]*nums[0],ans);
       return ans;
    }
};