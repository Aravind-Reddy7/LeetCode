class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> unique = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..",                         "--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        vector<string> result;
        vector<string> unique_copy;

        for(int i = 0; i < words.size(); i++) {
            string str = "";

            for(int j = 0; j < words[i].size(); j++) {
                str += unique[words[i][j] - 'a'];
            }

            result.push_back(str);
        }

        string val;
        for(int i = 0; i < result.size(); i++) {
            val = result[i];

            int j; 
            for(j = 0; j < unique_copy.size(); j++) {
                if(val == unique_copy[j])
                    break;
            }

            if(j == unique_copy.size())
                unique_copy.push_back(val);
                
        }

        return unique_copy.size();
    }
};