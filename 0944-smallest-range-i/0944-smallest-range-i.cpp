class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int minimum = nums[0];
        int maximum = nums[n - 1];

        int diff = maximum - minimum;

        if(diff <= 2 * k)
            return 0;

        maximum -= k;
        minimum += k;

        diff = maximum - minimum;

        return diff;
    }
};