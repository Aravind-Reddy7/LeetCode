class Solution {
public:
    string finalString(string s) {

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == 'i') {
                int left = 0, right = i - 1;
                while(left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
                
                int j;
                for(j = i; j < s.size() - 1; j++)
                    s[j] = s[j + 1];

                s.resize(j);
                i--;
            } 
        }

        return s;
    }
};