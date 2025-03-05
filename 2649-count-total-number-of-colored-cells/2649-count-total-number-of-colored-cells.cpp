class Solution {
public:
    long long coloredCells(int n) {
        long long n1 = n;
        return n1 * n1 + (n1 - 1) * (n1 - 1);
    }
};