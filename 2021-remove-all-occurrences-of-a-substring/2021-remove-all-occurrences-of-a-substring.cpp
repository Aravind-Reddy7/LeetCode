class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos;

        while( (pos = s.find(part)) != string::npos) { // np match is found
            s.erase(pos, part.size());
        }

        return s;
    }
};