class Solution {
public:
    bool checkString(string s) {
        bool B_seen = false;
        
        for(int i = 0; s[i] != '\0'; i++) {
            if(s[i] == 'b')
                B_seen = true;

            if(s[i] == 'a' && B_seen)
                return false;
        }

        return true;
    }
};