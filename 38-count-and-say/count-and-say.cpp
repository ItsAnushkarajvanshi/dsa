class Solution {
public: 
    string rle(string s){
        int c=1;
        char lst = s[0];
        string ans = "";
        for(int i =1; i<s.size(); i++){
            if(s[i]== lst){
                c++;
            }else{
                ans += to_string(c);
                ans += lst;
                c=1;
            }
            lst = s[i];
        }
        ans += to_string(c);
        ans +=lst;
        return ans;
    }

    string countAndSay(int n) {
        vector<string> dp(n+1);
        dp[1]="1";
        for(int i =2; i<= n ; i++){
            dp[i]= rle(dp[i-1]);
        }

        return dp[n];
    }
};