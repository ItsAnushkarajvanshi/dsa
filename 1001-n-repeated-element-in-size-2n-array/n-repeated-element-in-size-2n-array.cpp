class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>p;
        int k;
        for(int i=0;i<nums.size();i++){
           int n=nums[i];
            p[n]++;
        }
        for(auto const& [n,count]:p){
            if(count>=2){
                k=n;
                break;
            }
        }
        return k;
    }
};