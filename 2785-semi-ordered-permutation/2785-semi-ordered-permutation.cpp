class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        
        int n = nums.size(), result;
        int a, b, count = 0;

        if (nums[0] == 1 && nums[n-1] == n)
            return 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1)
                a = i;
            else if(nums[i] == n)
                b = i;
        }

        if (b < a)
            count = 1;

        b = (n-1) - b;

        result = a + b - count;

        return result;
    }
};