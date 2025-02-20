class Solution {
public:
    string reverseStr(string s, int k) {
        
        bool swap = true;
        int n = s.size();

        for(int i = 0; i < n; ) {

            if(swap) {
                int left = i, right = i + k - 1;
                if(right >= n)
                    right = n-1;

                while(left < right) {
                    char temp = s[left];
                    s[left] = s[right];
                    s[right] = temp;

                    left++;
                    right--;
                }
            }

            i = i + k;
            swap = !swap;

        }

        return s;

    }
};