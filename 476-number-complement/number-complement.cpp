class Solution {
public:
    int findComplement(int num) {
    int mask = num | 1;
    for (int i = 0; i <= 4; i++)
        mask |= mask >> (1 << i);
    return num ^ mask;
    }
};