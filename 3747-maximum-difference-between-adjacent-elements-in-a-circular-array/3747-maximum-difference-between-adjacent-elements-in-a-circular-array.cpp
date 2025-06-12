class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
        int result = 0, diff;
        int n = nums.size();

        for(int i = 0; i < n - 1; i++) {
            diff = abs(nums[i] - nums[i+1]);
            if(diff > result)
                result = diff;
        }

        diff = abs(nums[0] - nums[n-1]);

        if(diff > result)
            result = diff;

        return result;
    }
};