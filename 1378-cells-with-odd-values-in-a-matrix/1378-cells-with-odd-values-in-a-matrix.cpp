class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        int matrix[m][n];

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }

        for(int i = 0; i < indices.size(); i++) {
            
            int r = indices[i][0];

            for(int rows = 0; rows < n; rows++)
                matrix[r][rows] += 1;

            int c = indices[i][1];

            for(int cols = 0; cols < m; cols++)
                matrix[cols][c] += 1;
        }

        int count = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                
                int val = matrix[i][j];

                if(val % 2 != 0)
                    count++;
            }
        }

        return count;
    }
};