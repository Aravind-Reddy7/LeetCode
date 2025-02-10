class Solution {
public:
    string clearDigits(string s) {
        
        string str = "";
        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9')
                str.pop_back();
            else
                str.push_back(s[i]);
        }

        return str;
    }
};