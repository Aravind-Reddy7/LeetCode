class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int m = sandwiches.size();

        for(int i = 0; i < m; i++) {
            int n = students.size();
            bool next = false;

            for(int j = 0; j < n; j++) {
                if(students[0] == sandwiches[i]) {

                    for(int k = 0; k < (n - 1); k++) 
                        students[k] = students[k + 1];

                    students.resize(n - 1);
                    next = true;
                    break;
                }
                else {
                    int temp = students[0];

                    for(int k = 0; k < (n - 1); k++) 
                        students[k] = students[k + 1];

                    students[n - 1] = temp;
                }
            }

            if(!next)
                return n;
        }

        return 0;
    }
};