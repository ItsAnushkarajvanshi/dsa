class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>p;
        vector<int>a;
        vector<string>ans;
        int n=list1.size();
        int m=list2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(list1[i]==list2[j]){
                    p.push_back(list1[i]);
                    a.push_back(i+j);
                }
            }
        }
        int k=*min_element(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(a[i]==k){
                ans.push_back(p[i]);
            }
        }
        return ans;
    }
};