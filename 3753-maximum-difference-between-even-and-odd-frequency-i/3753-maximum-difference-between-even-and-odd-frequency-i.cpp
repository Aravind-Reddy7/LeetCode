class Solution {
public:
    int maxDifference(string s) {

        vector<int> hash(26);
        int odd = INT_MIN, even = INT_MAX;

        for(char ch : s)
            hash[ch - 'a']++;

        for(int i = 0; i < 26; i++) {
            int val = hash[i];

            if(val % 2 == 0 && val > 0) {
                if(val < even)
                    even = val;
            }else {
                if(val > odd && val > 0)
                    odd = val;
            }
        }

        int result = odd - even;

        return result;
    }
};