class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        int n = nums.size();
        int result = -1, maxCount = 0;

        for(int i = 0; i < n; i++) {
            int count = 0;

            if(nums[i] % 2 == 0) {
                for(int j = 0; j < n; j++) {
                    if(nums[i] == nums[j])
                        count++;
                }

                if(count > maxCount) {
                    result = nums[i];
                    maxCount = count;
                }
                else if(count == maxCount) {
                    if(nums[i] < result)
                        result = nums[i];
                }
            }

            
        }

        return result;
    }
};