class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();       
        if(n == 0 || s[0] == '0') return 0;  
        int k= 1;
        int p = 1; 
        for(int i = 1; i < n; i++) {
            int c = 0;
            if(s[i] != '0') {
                c= c+p;
            }
            int num = (s[i-1] - '0') * 10 + (s[i] - '0');
            if(num >= 10 && num <= 26) {
                c=c+k;
            }   
            k= p;
            p = c;
        }  
        return p;
    }
};
