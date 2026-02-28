class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        
        int prev = 1; 
        for(int i = 2; i <= n; i++) {
            int w = __bit_width(i); 
            long long start = (((long long)prev << w) % MOD + i) % MOD;
            prev = (int)start;
        }
        return prev;
    }
};