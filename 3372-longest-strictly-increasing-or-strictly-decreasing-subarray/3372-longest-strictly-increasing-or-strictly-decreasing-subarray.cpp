class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        
        int inc = 1, dec = 1, result = 1;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i-1] > nums[i]) {
                inc += 1;
                dec = 1;
            }else if(nums[i-1] < nums[i]) {
                dec += 1;
                inc = 1;
            }else {
                inc = 1;
                dec = 1;
            }

            if(inc > result) {
                result = inc;
            }else if(dec > result) {
                result = dec;
            }
        } 

        return result;
    }
};