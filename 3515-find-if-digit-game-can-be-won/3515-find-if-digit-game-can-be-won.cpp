class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int Single = 0, Double = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 1 && nums[i] < 10)
                Single += nums[i];
            else
                Double += nums[i];
        }

        return Single != Double;
    }
};