class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>p;
        if(m>0){
            for(int i=0;i<m;i++){
                p.push_back(nums1[i]);
            }
        }
        if(n>0){
            for(int i=0;i<n;i++){
                p.push_back(nums2[i]);
            }
        }
        sort(p.begin(),p.end());
        if(nums1.size()>m){
            nums1=p;
        }
        else{
            nums2=p;
        }
    }
};