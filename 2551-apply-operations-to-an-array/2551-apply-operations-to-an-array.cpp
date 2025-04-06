class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n-1; i++) {
            if(nums[i] == nums[i+1]) {
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
                i = i + 1;
            }
        }

        vector<int> result(n);
        int right = 0, left = n-1;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0)
                result[left--] = 0; 
            else
                result[right++] = nums[i];
        }

        return result;
    }
};