class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> A;

        if(n % 2 == 0) {
            for(int i = 1; i <= n; i += 2) {
                A.push_back(i);
                A.push_back(-i);
            }
        }else {
            for(int i = 1; i < n; i += 2) {
                A.push_back(i);
                A.push_back(-i);
            }
                A.push_back(0);
        }

        return A;
    }
};