class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> p(n, 1);
        for(int i = 1; i < n; i++){
            if(ratings[i] > ratings[i-1]){
                p[i] = p[i-1] + 1;
            }
        }
        for(int i = n-2; i >= 0; i--){
            if(ratings[i] > ratings[i+1]){
                p[i] = max(p[i], p[i+1] + 1);
            }
        }       
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += p[i];
        }   
        return sum;
    }
};
