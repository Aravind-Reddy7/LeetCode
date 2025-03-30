class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int high = s.size();   // Inisialisation 
        int low = 0;
        vector<int> result;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'I')
                result.push_back(low++); // if s[i] == 'I' push LOW value
            else
                result.push_back(high--); // if s[i] == 'D' push High value
        }

        result.push_back(low++);  

        return result; // return RESULT

    }
};