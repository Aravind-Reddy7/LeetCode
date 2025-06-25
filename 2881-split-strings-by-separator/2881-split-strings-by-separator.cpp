class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        
        int n = words.size();
        vector<string> result;

        for(int i = 0; i < n; i++) {
            string word = "";

            for(int j = 0; j < words[i].size(); j++) {
                if(words[i][j] != separator) {
                    word += words[i][j];
                }
                else {
                    if(word != "")
                        result.push_back(word);

                    word = "";
                }
            }
            if(word != "")
                result.push_back(word);
        }

        return result;
    }
};