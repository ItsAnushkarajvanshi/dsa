class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>e;
        vector<int>odd;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                e.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int k=0,l=0;
       for(int i=0;i<nums.size();i++){
        if(i%2==0){
            ans.push_back(e[k]);
            k++;
        }
        else{
            ans.push_back(odd[l]);
            l++;
        }
       } 
       return ans;
    }
};