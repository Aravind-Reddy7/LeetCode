class Solution {
public:
    bool check(vector<int>& nums) {
        
        int k = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1) % n]) 
                k++;
        }

        return k < 2;
    }
};