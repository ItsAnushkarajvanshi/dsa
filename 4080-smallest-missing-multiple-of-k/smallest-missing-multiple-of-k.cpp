class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_set<int>p(nums.begin(),nums.end());
       int m=k;
       while(true){
        if(p.find(m)==p.end()){
            return m;
        }
        m+=k;
       }
    }
};