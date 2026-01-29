class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int l= nums[0];
        int count = 1;
        int r= 0;
        for(int i = 1; i< n; i++){
            if(nums[i] == l){
                count++;
            }
            else{
                l = nums[i];
                count = 1;
            }
            if(count > 2){
                r++;
            }
            nums[i-r] = nums[i];
        }
        return n - r;
    }
};