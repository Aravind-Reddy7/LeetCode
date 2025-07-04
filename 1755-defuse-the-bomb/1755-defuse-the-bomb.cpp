class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        int n = code.size();
        vector<int> ans(0, n);

        if(k >= 0) {
            for(int i = 0; i < n; ++i) {
                int total = pos_sum(code, k, i);
                ans.push_back(total);
            }

            return ans;
        }

        for(int i = 0; i < n; i++) {
            int total = neg_sum(code, k, i);
            ans.push_back(total);
        }

        return ans;


    }

    int pos_sum(vector<int>& code, int k, int index) {
        int sum = 0;
        for(int i = index + 1; i <= index + k; i++) {
            sum += code[i % code.size()];
        }

        return sum;
    }

    int neg_sum(vector<int>& code, int k, int index) {
        int sum = 0, start = code.size() - abs(k) + index;
        for(int i = start; i < start + abs(k); i++) {
            sum += code[i % code.size()];
        }

        return sum;
    }
};