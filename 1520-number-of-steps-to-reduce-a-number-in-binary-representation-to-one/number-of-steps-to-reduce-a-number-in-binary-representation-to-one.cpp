class Solution {
public:
    int numSteps(string s) {
    vector<char>p;
    long long k=0;
    for(int i=0;i<s.size();i++){
        p.push_back(s[i]);
    }
    while(p.size()>1){
        int n=p.size()-1;
        if(p[n]=='0'){
            p.pop_back();
            k++;
        }
        else{
            while(n >= 0 && p[n] == '1'){
                p[n]='0';
                n=n-1;
            }
            if(n<0){
                p[0]='1';
                p.push_back('0');
            }
          else{
            p[n]='1';
          }
          k++;
        }
    }
       return k;
    }
};