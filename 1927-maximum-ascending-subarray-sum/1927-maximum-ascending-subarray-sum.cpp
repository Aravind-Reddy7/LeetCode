class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        
        int n = nums.size();
        int sum = nums[0];
        int result = nums[0];

        for(int i = 0; i < n - 1; i++) {

            if(nums[i] < nums[i + 1]) {
                sum = sum + nums[i+1];
            }else {
                sum = nums[i+1];
            }
            result = max(result, sum);
        }

        return result;
    }
};