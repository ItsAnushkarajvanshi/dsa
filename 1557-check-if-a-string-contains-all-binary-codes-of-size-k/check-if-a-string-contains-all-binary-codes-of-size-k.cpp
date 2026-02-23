class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.size() < k) return false;

        int total = 1 << k;
        unordered_set<string> p;

        for (int i = 0; i <= s.size() - k; i++) {
            p.insert(s.substr(i, k));
        }

        return p.size() == total;
    }
};