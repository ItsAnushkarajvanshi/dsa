class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        int sum = 0;
        while(sum != 1 && n / 10 != 0){
            sum = 0;
            while(n > 0){
                int rem = n % 10;
                sum += rem*rem;
                n /= 10;
            }
            n = sum;
        }
        return sum == 1 || n == 7;
    }
};