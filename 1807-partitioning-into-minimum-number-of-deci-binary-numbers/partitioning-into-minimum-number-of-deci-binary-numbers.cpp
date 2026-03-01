class Solution {
public:
    int minPartitions(string n) {
        char k = '0';      
        for(int i = 0; i < n.size(); i++){
            if(k < n[i]){
                k = n[i];
                if(k == '9') break;
            }
        }        
        int p = k - '0';
        return p;
    }
};
