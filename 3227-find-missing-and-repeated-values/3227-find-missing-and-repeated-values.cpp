class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int size = n * n;
        int a, b;

        vector<int> A(size+1, 0);

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                A[grid[i][j]]++;
            }
        }

        for(int i = 1; i <= size; i++) {
            if(A[i] == 2)
                a = i;
            else if(A[i] == 0)
                b = i;
        }

        return {a, b};
    }
};