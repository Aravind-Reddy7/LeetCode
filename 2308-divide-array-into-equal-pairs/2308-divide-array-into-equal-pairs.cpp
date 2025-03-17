class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        int A[1000] = {0};
        int n = nums.size();

        for(int i = 0; i < n; i++) 
            A[nums[i]-1]++;

        for(int i = 0; i < 1000; i++)
            if(A[i] % 2 != 0)
                return false;

        return true;
        
    }
};