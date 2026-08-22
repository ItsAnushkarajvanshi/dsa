class Solution {
public:
    bool checkDivisibility(int n) {
        int p=n;
        int s=0;
        int m=1;
        while(p!=0){
         int r=p%10;
         s+=r;
         m*=r;
         p/=10;
        }
        s=s+m;
        if(n%s==0){
            return true;
        }
        else return false;
    }
};