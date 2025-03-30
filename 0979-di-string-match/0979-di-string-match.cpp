class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int high = s.size();
        int low = 0;
        vector<int> result;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'I')
                result.push_back(low++);
            else
                result.push_back(high--);
        }

        result.push_back(low++);

        return result;

    }
};