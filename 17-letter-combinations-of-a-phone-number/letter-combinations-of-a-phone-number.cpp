class Solution {
public:
    vector<string> ans;
    vector<string> keys = {"",    "",    "abc",  "def", "ghi",
                           "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void recursion(string& digits, string& temp, int index, int& n) {

        if (index == n) {
            ans.push_back(temp);
            return;
        }
        int curr_Num = digits[index] - '0';
        for (auto& key : keys[curr_Num]) {
            temp.push_back(key);
            recursion(digits, temp, index + 1, n);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return ans;
        }
        string temp;
        int n = digits.size();
        recursion(digits, temp, 0, n);
        return ans;
    }
};