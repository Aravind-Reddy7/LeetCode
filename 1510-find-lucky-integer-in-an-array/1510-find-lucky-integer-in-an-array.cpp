class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int hash[501] = {0};
        int result = -1;

        for(int num : arr) {
            hash[num]++;
        }

        for(int i = 1; i < 501; i++) {
            if(hash[i] == i) {
                result = i;
            }
        }

        return result;

    }
};