class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {
            float a = nums[i], b = nums[i+2], c = nums[i+1];
            if(a + b == c / 2)
                count++;
        }

        return count;
    }
};