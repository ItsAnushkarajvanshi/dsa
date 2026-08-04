class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       vector<int>p;
       for(int i=0;i<n-1;i++){
        if(nums[i]+1!=nums[i+1]){
            int k=nums[i]+1;
            while(k!=nums[i+1]){
            p.push_back(k);
            k++;
            }
        }
       } 
       return p;
    }
};