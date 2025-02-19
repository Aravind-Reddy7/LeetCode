class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<int> result;
        int count = 0, i;

        for(i = 0; i < nums.size() - 1; ) {
            if(nums[i] != nums[i+1]) {
                result.push_back(nums[i]);
                count++, i++;
            }
            else
                i += 2;
        }

        if(count == 1)
            result.push_back(nums[i]);

        return result;
    }
};