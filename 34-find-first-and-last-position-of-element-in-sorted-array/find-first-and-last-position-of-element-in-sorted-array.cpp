class Solution {
public:
    vector<int> searchRange(vector<int>& s, int t) {
      int p=-1,e=-1;
      int n=s.size();
      for(int i=0;i<n;i++){
        if(s[i]==t){
            p=i;
            break;
        }
      } 
      for(int i=n-1;i>=0;i--){
        if(s[i]==t){
            e=i;
            break;
        }
      }
      return {p,e};
    }
};