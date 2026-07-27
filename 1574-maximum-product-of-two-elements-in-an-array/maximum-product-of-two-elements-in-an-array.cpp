class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=(nums[0]-1)*(nums[1]-1);
        ans=max(ans,(nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
        return ans;
    }
};