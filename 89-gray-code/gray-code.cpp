#include <algorithm> 
class Solution {
public:
    vector<int> grayCode(int n) {
        int k = 1 << n;
        vector<int> p;
        for(int i = 0; i < k; i++){
            p.push_back(i ^ (i >> 1));
        }

        return p;
    }
};