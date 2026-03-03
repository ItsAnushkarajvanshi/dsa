class Solution {

public:
    char findKthBit(int n, int k) {
        if(n==1){return '0';}
        int lenSn = 1<<n;
        if(k==lenSn/2){return '1';}
        if(k<lenSn/2){return findKthBit(n-1,k);}
        return (findKthBit(n-1,lenSn-k) == '0')?'1':'0';
    }
};