bool p[101];
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        const int m = s1.length(), n = s2.length();       
        if (m + n != s3.length()) return false;
        p[0] = true;
        for (int j = 1; j <= n; ++j)
            p[j] = (p[j - 1] && s2[j - 1] == s3[j - 1]);
        for (int i = 1; i <= m; ++i) {
            p[0] = (p[0] && s1[i - 1] == s3[i - 1]);
            for (int j = 1; j <= n; ++j)
                p[j] = (p[j] && s1[i - 1] == s3[i + j - 1]) ||
                       (p[j - 1] && s2[j - 1] == s3[i + j - 1]);
        }
        return p[n];
    }
};
