class Solution {
public:
    bool isAnagram(string s, string t) {
    
    if(s.length() != t.length())
        return false;

    vector<int> hash1(26, 0);
    vector<int> hash2(26, 0);

    for(char c : s)
        hash1[c - 'a']++;

    for(char c : t)
        hash2[c - 'a']++;

    return hash1 == hash2;
    }
};