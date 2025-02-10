class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        char Hash[26] = {0};
        int count = 0;

        for(char ch : allowed)
            Hash[ch - 'a']++;

        for(int i = 0; i < words.size(); i++) {
            char Hash1[26] = {0};
            for(int j = 0; j < words[i].size(); j++) 
                Hash1[words[i][j] - 'a']++;

            bool found = true;
            for(int k = 0; k < 26; k++) {
                if(Hash[k] == 0 && Hash1[k] != 0) {
                    found = false;
                    break;
                }
            }

            if(found)
                count++;
        }

        return count;
    }
};