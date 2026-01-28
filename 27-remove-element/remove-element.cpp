class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int sum=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==val){
          continue;
        }
        else{
            sum++;
        }
       } 
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return (nums,sum);
    }
};