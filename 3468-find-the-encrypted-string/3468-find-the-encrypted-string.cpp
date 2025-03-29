class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        int n = s.size();
        k = k % n;

        string result = "";

        for(int i = 0; i < n - k; i++)
            result += s[i + k];

        for(int i = 0; i < k; i++)
            result += s[i];

        //for(int i = 0)
        return result;
    }
};