class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string w = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                w += s[i];
            } else if (w != "") {
                words.push_back(w);
                w = "";
            }
        }

        if (w != "") {
            words.push_back(w);
        }

        s = "";
        for (int i = words.size()-1; i >= 0; i--) {
            s += words[i];
            if (i !=0) {
                s += " ";
            }
        }

        return s;
    }
};
