class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int m=d.size()-1;
        for(int i=m;i>=0;i--){
            if(d[i]!=9){
                d[i]+=1;
                return d;
            }
            d[i]=0;
        }
        d.insert(d.begin(),1);
        return d;
    }
};