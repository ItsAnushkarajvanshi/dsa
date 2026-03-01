class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int>s(10,0);
        vector<int>g(10,0);
        int b=0;
        int c=0;
        for(int i=0;i<secret.size();i++){
            int x=secret[i]-'0';
            int y=guess[i]-'0';
            if(x==y){
                b++;
            }
            else{
                s[x]++;
                g[y]++;
            }
        }
        for(int i=0;i<s.size();i++){
           c+=min(s[i],g[i]);
        }
        return to_string(b)+"A"+to_string(c)+"B";
    }
};