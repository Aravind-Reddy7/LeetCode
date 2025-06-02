class Solution {
public:
    int minSteps(string s, string t) {
        
        int s_freq[26] = {0};
        int t_freq[26] = {0};

        for(int i = 0; i < s.size(); i++) 
            s_freq[s[i] - 'a']++;

        for(int i = 0; i < t.size(); i++) 
            t_freq[t[i] - 'a']++;

        int result = 0;

        for(int i = 0; i < 26; i++) {
            result += abs(s_freq[i] - t_freq[i]);
        }

        return result;
    }
};