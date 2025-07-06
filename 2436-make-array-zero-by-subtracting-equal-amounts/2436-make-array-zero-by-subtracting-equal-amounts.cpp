class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int min, count = 0;

        while(true) {
            min = minimum(nums);
            
            if(min == INT_MAX)
                break;

            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > 0)
                    nums[i] -= min;
            }

            count += 1;
        }

        return count;
    }

    int minimum(vector<int>& nums) {

        int min = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0 && nums[i] < min)
                min = nums[i];
        }

        return min;
    }
};