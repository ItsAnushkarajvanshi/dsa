class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        if(n < 2) return 0;
        int k1 = 0;
        int k2 = 0; 
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s[i] != '0') k1++;
            }
            else{
                if(s[i] != '1') k1++;
            }
            if(i % 2 == 0){
                if(s[i] != '1') k2++;
            }
            else{
                if(s[i] != '0') k2++;
            }
        }
        return min(k1, k2);
    }
};
