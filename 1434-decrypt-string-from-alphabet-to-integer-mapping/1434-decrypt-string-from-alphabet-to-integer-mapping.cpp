class Solution {
public:
    string freqAlphabets(string s) {
        
        string result = "";
        int n = s.size();

        for(int i = 0; i < n; i++) {
            int num = 0;

            if(i < n - 2 && s[i + 2] == '#') {
                num = (s[i] - '0');
                num = num * 10 + (s[i + 1] - '0'); 
                i += 2;
            } else 
                num = (s[i] - '0');

            result += 'a' + (num - 1);
        }

        return result;
    }
};