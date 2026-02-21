class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int>p;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=1;i<n;i++){
        if(nums[i-1]==nums[i]){
            i++;
            continue;
        }
        else{
            p.push_back(nums[i-1]);
        }
       } 
       if(p.size()==1){
        p.push_back(nums[n-1]);
       }
       return p;
    }
};