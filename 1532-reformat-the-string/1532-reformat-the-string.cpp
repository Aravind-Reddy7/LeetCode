class Solution {
public:
    string reformat(string s) {
        
        int alpha = 0, num = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                alpha++;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                num++;
            }
        }

        if(abs(alpha - num) > 1)
            return "";

        string str(s.size(), ' ');
        int letters, digits;

        if(alpha >= num) {
            letters = 0, digits = 1;
        }else {
            letters = 1, digits = 0;
        }

        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                str[letters] = s[i];
                letters += 2;
            }else {
                str[digits] = s[i];
                digits += 2;
            }
        }

        return str;

    }
};