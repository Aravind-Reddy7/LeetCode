class Solution {
public:
    int maxDepth(string s) {
        int count = 0, result = 0;

        for(int i = 0; s[i] != '\0'; i++)
        {
            if(s[i] == '(')
                count++;
            else if(s[i] == ')')
                count--;

            if(count > result)
                result = count;
        }

        return result;
    }
};