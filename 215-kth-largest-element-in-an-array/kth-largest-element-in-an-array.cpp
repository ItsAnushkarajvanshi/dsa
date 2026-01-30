class Solution {
public:
    int findKthLargest(vector<int>& n, int k) {
      sort(n.begin(),n.end(),greater<>());
      return n[k-1];  
    }
};