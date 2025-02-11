class Solution {
public:
    int similarPairs(vector<string>& words) {
        
        int counter = 0;
        for(int i = 0; i < words.size() - 1; i++) {
            
            int Hash1[26] = {0};
            for(char ch : words[i]) 
                Hash1[ch - 'a']++;
            
            for(int j = i + 1; j < words.size(); j++) {
                int Hash2[26] = {0};
                for(char ch : words[j]) 
                    Hash2[ch - 'a']++;
                
                int found = true;
                for(int i = 0; i < 26; i++) {
                    if(Hash1[i] == 0 && Hash2[i] != 0 || Hash1[i] != 0 && Hash2[i] == 0) {
                        found = false;
                        break;
                    }
                }

                if(found)
                    counter++;
            }
        }

        return counter;
    }
};