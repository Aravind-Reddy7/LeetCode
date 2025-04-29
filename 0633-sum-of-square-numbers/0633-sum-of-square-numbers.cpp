class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long left = 0, right = sqrt(c), c1;

        while(left <= right) {
            c1 = left * left + right * right;

            if(c1 > c)
                right -= 1;
            else if(c1 < c)
                left += 1;
            else
                return 1;
        }

        return 0;
    }
};