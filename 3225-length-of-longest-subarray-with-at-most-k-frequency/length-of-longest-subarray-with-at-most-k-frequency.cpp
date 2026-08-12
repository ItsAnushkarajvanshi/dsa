class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = 0, start = -1;
        unordered_map<int, int> frequency;       
        for (int i= 0; i< nums.size();i++) {
            frequency[nums[i]]++;
            while (frequency[nums[i]] > k) {
                start++;
                frequency[nums[start]]--;
            }
            ans = max(ans,i-start);
        }       
        return ans;
    }
};