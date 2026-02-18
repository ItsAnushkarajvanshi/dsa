class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<int>t;
        int p=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              t.push_back(matrix[i][j]);
            }
        }
        sort(t.begin(),t.end());
        return t[k-1];
    }
};