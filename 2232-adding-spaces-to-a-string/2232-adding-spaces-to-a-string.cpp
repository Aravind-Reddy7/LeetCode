class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string s1;
        int index = 0;

        for(int i = 0; i < s.size(); i++) {
            if(index < spaces.size() && i == spaces[index]) {
                s1 += ' ';
                index++;
            }
            
            s1 += s[i];
            
        }

        return s1;
    }
};