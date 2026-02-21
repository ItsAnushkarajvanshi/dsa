class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int k=0;
        if(nums.size()<3){
            return nums[0];
        }
       stack<int>st;
       st.push(nums[0]);
       for(int i=1;i<nums.size();i++){
        if(st.top()!=nums[i] && st.size()!=3){
           st.push(nums[i]);
        }
       }
       if(st.size()==3)return st.top();
       else return nums[0];
    }
};