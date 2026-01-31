class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
      auto it=find(nums.begin(),nums.end(),target);
      if(it!=nums.end()){
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
      } 
      return -1; 
    }
};