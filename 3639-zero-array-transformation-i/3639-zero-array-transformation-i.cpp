class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size();
        vector<int> diff(n + 1, 0);

        for(const auto& query : queries) {
            int start = query[0];
            int end = query[1];
            diff[start] += 1;
            if(end + 1 < n)
                diff[end + 1] -= 1;

        }

        int cummulative = 0;

        for(int i = 0; i < n; ++i) {
            cummulative += diff[i];
            if(cummulative < nums[i])
                return false;
        }

        return true;
    }
};