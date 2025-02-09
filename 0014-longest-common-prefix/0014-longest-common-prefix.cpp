class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";

        for(int i = 0; i < strs[0].size(); i++) {
            
            char ch = strs[0][i];
            bool present = true;
            
            for(int j = 0; j < strs.size(); j++) {
                if(strs[j][i] != ch)
                    present = false;
            }

            if(!present)
                break;

            str += ch;
        }

        return str;
    }
};