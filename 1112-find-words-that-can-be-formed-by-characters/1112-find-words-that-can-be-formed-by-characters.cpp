class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int Hash1[26] = {0};
        
        int count = 0;

        for(char ch : chars)
            Hash1[ch - 'a']++;

        for(int i = 0; i < words.size(); i++) {
            int Hash2[26] = {0};
            bool found = true;

            for(char ch : words[i]) 
                Hash2[ch - 'a']++;

            for(int i = 0; i < 26; i++)
                if(Hash1[i] < Hash2[i])
                    found = false;

            if(found)
                count += words[i].size();
        }

        return count;
    }
};