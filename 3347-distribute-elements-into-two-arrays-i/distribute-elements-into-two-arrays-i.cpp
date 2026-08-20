class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>p ={nums[0]};
        vector<int>k ={nums[1]};
        if(n<3)return nums;
        int a=nums[0];
        int b=nums[1];
        for(int i=2;i<n;i++){
           if(a>=b){
            p.push_back(nums[i]);
            a=nums[i];
           }
           else{
            k.push_back(nums[i]);
            b=nums[i];
           }  
        }
        for(int i=0;i<k.size();i++){
            p.push_back(k[i]);
        }
        return p;
    }
};