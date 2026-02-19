class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = -1;
        for(int i = n-1; i > 0; i--){
            if(nums[i] > nums[i-1]){
                int m = INT_MAX;              
                for(int j = i; j < n; j++){
                    if(nums[j] > nums[i-1] && nums[j] < m){
                        m = nums[j];
                        k = j;
                    }
                }                
                swap(nums[i-1], nums[k]);
                sort(nums.begin()+i, nums.end());
                return;
            }
        }        
        sort(nums.begin(), nums.end());
    }
};
