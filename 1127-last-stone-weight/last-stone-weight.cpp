class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       while(stones.size()!=1){
        sort(stones.begin(),stones.end(),greater<int>());
        int n=stones[0]-stones[1];
        stones.erase(stones.begin(),stones.begin()+2);
        stones.push_back(n);
       } 
       if(stones[0]<0){
        return (-stones[0]);
       }
       return stones[0];
    }
};