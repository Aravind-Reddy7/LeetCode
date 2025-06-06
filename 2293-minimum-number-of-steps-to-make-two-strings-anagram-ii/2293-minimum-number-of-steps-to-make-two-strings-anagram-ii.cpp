class Solution {
public:
    int minSteps(string s, string t) {
        int freq[26] = {0};

        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;

        int result = 0;
        for (int i = 0; i < 26; i++) {
            result += abs(freq[i]);
        }

        return result;
    }
};
