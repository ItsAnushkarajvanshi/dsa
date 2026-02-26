class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>p;
       unordered_map<int,int>k;
       int n=nums.size();
       for(int i=0;i<n;i++){
        int j=nums[i];
        k[j]++;
       } 
       for(auto const& [j,count]:k){
        if(count>1){
            p.push_back(j);
        }
       }
       return p;
    }
};