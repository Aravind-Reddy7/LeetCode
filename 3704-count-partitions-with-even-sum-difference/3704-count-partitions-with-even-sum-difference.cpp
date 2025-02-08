class Solution {
public:
    int countPartitions(vector<int>& nums) {
        
        int total_sum = 0;
        int count = 0, sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            total_sum += nums[i];
        }

        for(int i = 0; i < nums.size() - 1; i++) {
            sum += nums[i];

            int val = sum - (sum - total_sum);

            if(val % 2 == 0)
                count++;
        }

        return count;
    }
};