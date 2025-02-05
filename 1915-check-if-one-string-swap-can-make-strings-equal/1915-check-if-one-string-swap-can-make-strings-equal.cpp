class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        int n = s1.size();

        vector<int> arr1(26);
        vector<int> arr2(26);

        for(int i = 0; i < n; i++) {
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }

        if(arr1 == arr2) {
            int count = 0;

            for(int i = 0; i < n; i++) {
                if(s1[i] != s2[i])
                    count++;
            }

            if(count == 2 || count == 0)
                return true;
        }

        return false;
    }
};