class Solution {
public:
    bool isPowerOfFour(int p) {
      long long n=1;
      while(n<=p){
        if(n==p){
            return true;
        }
        else{
            n*=4;
        }
      }  
      return false;
    }
};