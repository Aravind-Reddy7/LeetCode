class Solution {
public:
    char kthCharacter(int k) {

        string word = "a";

        while(word.size() < k) {
            string add = "";

            for(int i = 0; i < word.size(); i++) {
                if(word[i] >= 'a' && word[i] <= 'y') {
                    add += word[i] + 1;
                }else {
                    add += 'a';
                }
            }

            word += add;
        }

        return word[k - 1];
    }
};