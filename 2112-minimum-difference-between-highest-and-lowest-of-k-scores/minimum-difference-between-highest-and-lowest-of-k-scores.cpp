class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if(k==1)return 0;
        int ans = INT_MAX, j = k - 1;
        for(int i = 0; i + j < nums.size(); i++) {
            ans = min(ans, nums[i + j] - nums[i]);
        }
        return ans;
    }
};