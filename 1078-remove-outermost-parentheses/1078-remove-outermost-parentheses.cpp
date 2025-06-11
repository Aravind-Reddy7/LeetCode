class Solution {
public:
    string removeOuterParentheses(string s) {
        
        char stack = ' ';
        string result = "";
        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(stack == ' ')
                stack = s[i];
            else if(stack == '(' && count == 0 && s[i] == ')')
                stack = ' ';
            else {
                if(s[i] == '(')
                    count++;
                else
                    count--;

                result += s[i];
            }
        }

        return result;

    }
};