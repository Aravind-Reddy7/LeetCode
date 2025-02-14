class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int index = 0;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].size(); j++) {
                
                if(s[index] == '\0' && (i > 0 && i < words.size()) && j == 0)
                    return true;
                else if(s[index] != words[i][j])
                    return false;

                index++;
            }
        }
        return s[index] == '\0';
    }
};