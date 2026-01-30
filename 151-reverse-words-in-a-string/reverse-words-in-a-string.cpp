class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string w = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                w += s[i];
            } else if (w != "") {
                words.insert(words.begin(), w);
                w = "";
            }
        }

        if (w != "") {
            words.insert(words.begin(), w);
        }

        s = "";
        for (int i = 0; i < words.size(); i++) {
            s += words[i];
            if (i != words.size() - 1) {
                s += " ";
            }
        }

        return s;
    }
};
