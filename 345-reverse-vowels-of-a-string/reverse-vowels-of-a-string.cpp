class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        vector<char>p;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                p.push_back(s[i]);
            }
        }
        reverse(p.begin(),p.end());
        int j=0;
         for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=p[j];
                j++;
            }
        }
        return s;
    }
};