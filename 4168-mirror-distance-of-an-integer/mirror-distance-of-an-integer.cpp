class Solution {
public:
    int rev(int n){
     int k=0;
     while(n){
        int r=n%10;
        k=k*10+r;
        n=n/10;
     }
     return k;
    }
    int mirrorDistance(int n) {
       int m=rev(n);
       return abs(n-m);
    }
};