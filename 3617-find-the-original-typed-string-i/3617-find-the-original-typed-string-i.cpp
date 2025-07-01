class Solution {
public:
    int possibleStringCount(string word) {
        
        int result = 1, count = 0;
        int n = word.size();

        for(int i = 0; i < n - 1; i++) {
            if(word[i] == word[i + 1])
                count++;
            else {
                result += count;
                count = 0;
            }
        }

        if(count != 0)
            result += count;

        return result;
    }
};