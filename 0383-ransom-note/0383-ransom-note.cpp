class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int A[26] = {0};
        int B[26] = {0};

        for(char ch : ransomNote)
            A[ch - 'a']++;

        for(char ch : magazine)
            B[ch - 'a']++;

        for(int i = 0; i < 26; i++)
            if(A[i] > B[i])
                return false;

        return true;    
    }
};