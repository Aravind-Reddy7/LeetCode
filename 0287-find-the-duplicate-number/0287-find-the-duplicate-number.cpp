class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> Hash(n, 0);

        for(int i : nums)
            Hash[i]++;

        for(int i = 0; i < n; i++) 
            if(Hash[i] > 1)
                return i;

        return n+1;
    }
};