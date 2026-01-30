class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        stack<int>h;
        int k=0;
        h.push(-1);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
            h.push(i);
            }
            else{
                h.pop();
            if(h.empty()){
                h.push(i);
            }else{
                k=max(k,i-h.top());
            }
            }
        }
        return k;
    }
};